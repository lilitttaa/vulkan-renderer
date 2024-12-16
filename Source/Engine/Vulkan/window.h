#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace vulkan_engine
{
class Window
{
public:
	GLFWwindow* window_;

	Window(int width, int height) : Window(width, height, "Vulkan Application") {}

	Window(int width, int height, std::string window_name)
		: width_{static_cast<uint32_t>(width)}, height_{static_cast<uint32_t>(height)}
	{
		window_name_ = window_name;
		InitWindow();
	}

	~Window()
	{
		glfwDestroyWindow(window_);
		glfwTerminate();
	}

	bool ShouldClose() { return glfwWindowShouldClose(window_); }
	bool WasWindowResized() { return frame_buffer_resized_; }
	void ResetWindowResized() { frame_buffer_resized_ = false; }

private:
	void InitWindow();

	static void FramebufferResizeCallback(GLFWwindow* window, int width, int height);

private:
	const uint32_t width_;
	const uint32_t height_;
	std::string window_name_;
	bool frame_buffer_resized_ = false;
};
}
