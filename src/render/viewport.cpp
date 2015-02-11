#include "viewport.hpp"

using namespace core;

Viewport::Viewport( size_t width, size_t height )
    : _width ( width  )
    , _height( height )
{
    // empty for now
}

Viewport::~Viewport()
{
    // empty for now
}

void Viewport::resize( size_t width, size_t height )
{
    _width = width;
    _height = height;
}

size_t Viewport::height() const
{
    return _height;
}

size_t Viewport::width() const
{
    return _width;
}

void Viewport::init()
{
    // empty for now
}
