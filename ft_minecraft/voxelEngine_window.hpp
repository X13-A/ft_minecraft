#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace voxelEngine 
{
	class VoxelEngineWindow 
	{
		public:
			VoxelEngineWindow(int w, int h, std::string name);
			~VoxelEngineWindow();

			VoxelEngineWindow(const VoxelEngineWindow&) = delete;
			VoxelEngineWindow& operator=(const VoxelEngineWindow&) = delete;

			bool shouldClose() { return glfwWindowShouldClose(window); }

		private:
			GLFWwindow* window;

			void initWindow();

			const int width;
			const int height;

			std::string windowName;

	};
}