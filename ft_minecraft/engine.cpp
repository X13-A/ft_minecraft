#include "engine.hpp"

namespace voxelEngine 
{
	void Engine::run()
	{
		while (!window.shouldClose())
		{
			glfwPollEvents();
		}
	}
}
