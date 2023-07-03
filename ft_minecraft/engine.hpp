#pragma once

#include "voxelEngine_window.hpp"
#include "voxelEngine_pipeline.hpp"

namespace voxelEngine 
{
	class Engine 
	{
		public:
			static constexpr int WIDTH = 800;
			static constexpr int HEIGHT = 600;
			void run();

		private:
			VoxelEngineWindow window { WIDTH, HEIGHT, "Voxel Engine" };
			VoxelEnginePipeline pipeline{ "simple_shader.vert.spv", "simple_shader.frag.spv" };
	};
}