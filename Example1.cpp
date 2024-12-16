#include "Vulkan/app.h"
#include <cstdlib>
#include <iostream>

int main()
{
	vulkan_engine::App app;

	try { app.Run(); }
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
