/**
 *
 *
 */

#pragma once

#include <RenderWindow.hpp>


namespace <{1:core}> {

/**
 * @brief Uber-class that is for making unite OpenCL render and OpenGL display output.
 *
 */
class Viewport {
public:
    Viewport() = delete; // perhaps we want make viewport without sizes?

    /**
     *
     */
    Viewport( size_t width, size_t height );

    /**
     */
    ~Viewport();

    /**
     */
    void resize( size_t width, size_t height );

    /**
     */
    size_t height() const;

    /**
     */
    size_t width() const;

protected:

    /**
     */
    void init();

    void render();

private:
    sfml::RenderWindow _window;
};

} // namespace core
