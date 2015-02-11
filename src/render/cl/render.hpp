
namespace core {

/**
 *
 */
class CLRender {
public:
    CLRender() {}
    ~CLRender() {}

    void init() {}

    /**
     * @brief Uploads resources up to the OpenCL compute device.
     */
    void upload() {}

    /**
     * @brief Donwloads final data from compute device.
     */
    void download() {}

    /**
     * @brief Calls to clean device resources.
     */
    void clean() {}

    /**
     * @birf Makes render.
     */
    void render() {}

protected:

};

} // namespace core
