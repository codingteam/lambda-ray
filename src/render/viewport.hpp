#include <gl.h>


namespace <{1:core}> {

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

private:

    size_t _width;
    size_t _height;

};

} // namespace core
