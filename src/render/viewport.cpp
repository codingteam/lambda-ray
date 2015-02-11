#include "viewport.hpp"

using namespace core;

Viewport::Viewport( size_t width, size_t height )
{
    _window = new sfml::RenderWindow( new sfml::VideoMode( width, height ), "Lambda Ray" );
}

Viewport::~Viewport()
{
    // empty for now
}

void Viewport::resize( size_t width, size_t height )
{
    _window.setSize( { width, height } );
}

size_t Viewport::height() const
{
    const auto size = _window.getViewport();
    return size.height;
}

size_t Viewport::width() const
{
    const auto size = _window.getViewport();
    return size.width;
}

void Viewport::init()
{
    // empty for now
}

void Viewport::render()
{

}
