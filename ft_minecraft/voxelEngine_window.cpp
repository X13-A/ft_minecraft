#include "voxelEngine_window.hpp"

namespace voxelEngine
{
	VoxelEngineWindow::VoxelEngineWindow(int w, int h, std::string name) : width {w}, height{h}, windowName{name}
	{
		initWindow();
	}

	VoxelEngineWindow::~VoxelEngineWindow() 
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void VoxelEngineWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
} 
