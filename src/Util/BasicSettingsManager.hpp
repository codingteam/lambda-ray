#pragma once

#include <string>
#include <map>
//#include <boost/variant>


namespace core {
namespace utils {

/**
 * @brief Base class for settings manager.
 */
class BasicSettingsManager {

    //std::map< std::string, boost::variant > _properties;

public:

    BasicSettingsManager();

    virtual ~BasicSettingsManager();

    void init();

    void release();

    /**
     * @brief
     *
     */
    //boost::variant property( const std::string& name, const boost::variant& defaultValut );

    //void setRawValue( const std::string& path, const boost::variant& value );




};

} // namespace utils
} // namespace core
