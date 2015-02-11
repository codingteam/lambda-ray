#include <exception>
#include <string>

#include "render.hpp"

using namespace core;

struct DeviceInfo {
    std::string vendor;
    // blah
    // blah
    // blah
};

void cl_assert( const cl_int errorCode, const str::string& message )
{
    if( errorCode != CL_SUCCESS ) {
        //log() << "ERROR: " << message << " ERROR CODE: " << errorcode;
        throw std::exception( message );
    }
}

void CLRender::init()
{
    cl::vector< cl::Platform > platforms;
    cl::Platform::get( &platforms );

    if( palforms.empty() )
        throw std::exception( "Cannot get any CL platform." );

    // log() << "Amount of platforms is: " <<  platforms.size();

    auto get_platform_info = [this] ( const cl::Platform platform ) {
        DeviceInfo device;
        auto get_info = [this] ( const cl::Platform platform, const cl_platform_info infoType ) {
            std::string str;
            platform.getInfo( infoType, &str );
            return str;
        };
        device.vendor = platform.getInfo( platform, CL_PLATFORM_VENDOR );
        return device;
    };

    const auto deviceInfo = get_platform_info( platforms[ 0 ] );

    const cl_context_properties cprops[ 3 ] = { CL_CONTEXT_PLATFORM, ( cl_context_properties )( platforms[0] )(), 0 };
    cl_int error;
    auto context = cl::context( CL_DEVICE_TYPE_CPU, cprops, NULL, NULL, &error );
    cl_assert( error, "Cannot create context" );
}
