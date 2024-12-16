#pragma once
#include "window.h"

namespace vulkan_engine
{
class App
{
public:
	static constexpr int kWidth = 800;
	static constexpr int kHeight = 600;

private:
	Window window_{kWidth, kHeight, "Hello Vulkan!"};

public:
	void Run();
};
}
