#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace GameEngine {

	class ENGINE_API Log
	{
	public:
		//static void Init();

		//inline static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_CoreLogger; }
		//inline static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_ClientLogger; }

		static void error(const char* args);
		static void fatal(const char* args);
		static void warn(const char* args);
		static void info(const char* args);
		static void trace(const char* args);

	private:
		//static std::shared_ptr<spdlog::logger> s_CoreLogger;
		//static std::shared_ptr<spdlog::logger> s_ClientLogger;

		static int BLUE;
		static int GREEN;
		static int RED;
		static int YELLOW;
	};
}

// Core Macros
//#define GE_CORE_ERROR(...) ::GameEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
//#define GE_CORE_WARN(...)  ::GameEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
//#define GE_CORE_INFO(...)  ::GameEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
//#define GE_CORE_TRACE(...) ::GameEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
//#define GE_CORE_FATAL(...) ::GameEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define GE_CORE_ERROR(...) ::GameEngine::Log::error(__VA_ARGS__)
#define GE_CORE_WARN(...)  ::GameEngine::Log::warn(__VA_ARGS__)
#define GE_CORE_INFO(...)  ::GameEngine::Log::info(__VA_ARGS__)
#define GE_CORE_TRACE(...) ::GameEngine::Log::trace(__VA_ARGS__)
#define GE_CORE_FATAL(...) ::GameEngine::Log::fatal(__VA_ARGS__)

// Client Macros
#define GE_ERROR(...)      ::GameEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define GE_WARN(...)       ::GameEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GE_INFO(...)       ::GameEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define GE_TRACE(...)      ::GameEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GE_FATAL(...)      ::GameEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)