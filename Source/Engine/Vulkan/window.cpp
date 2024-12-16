#include "window.h"

namespace vulkan_engine
{
void Window::InitWindow()
{
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	window_ = glfwCreateWindow(width_, height_, window_name_.c_str(), nullptr, nullptr);
	glfwSetWindowUserPointer(window_, this);
	glfwSetFramebufferSizeCallback(window_, FramebufferResizeCallback);
}

void Window::FramebufferResizeCallback(GLFWwindow* window, int width, int height)
{
	auto app = reinterpret_cast<Window*>(glfwGetWindowUserPointer(window));
	app->frame_buffer_resized_ = true;
}
}
