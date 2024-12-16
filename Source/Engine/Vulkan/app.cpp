#include "app.h"

namespace vulkan_engine
{
void App::Run() { while (!window_.ShouldClose()) { glfwPollEvents(); } }
}
