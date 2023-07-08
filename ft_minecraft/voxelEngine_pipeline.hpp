#pragma once
#include <string>
#include <vector>
#include "voxelEngine_device.hpp"

namespace voxelEngine 
{
	struct PipelineConfigInfo 
	{

	};


	class VoxelEnginePipeline 
	{
		public:
			VoxelEnginePipeline(
				VoxelEngineDevice &device,
				const std::string& vertFilePath,
				const std::string& fragFilePath,
				const PipelineConfigInfo configInfo);
			~VoxelEnginePipeline() {}

			VoxelEnginePipeline(const VoxelEnginePipeline &) = delete;
			void operator=(const VoxelEnginePipeline&) = delete;

			static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);
		private:
			static std::vector<char> readFile(const std::string &filepath);

			void createGraphicsPipeline(
				const std::string& vertFilePath,
				const std::string& fragFilePath,
				const PipelineConfigInfo configInfo
			);

			void createShaderModule(const std::vector<char>& code, VkShaderModule* shaderModule);

			VoxelEngineDevice& voxelEngineDevice;
			VkPipeline graphicsPipeline;
			VkShaderModule vertShaderModule;
			VkShaderModule fragShaderModule;
	};
}