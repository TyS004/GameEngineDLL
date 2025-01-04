#include <iostream>

#include "Log.h"

//#include "spdlog/sinks/stdout_color_sinks.h"

namespace GameEngine {

	//std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	//std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	// Setting Color Values for Console
	int Log::BLUE = 1;
	int Log::GREEN = 2;
	int Log::RED = 4;
	int Log::YELLOW = 6;

	//void Log::Init()
	//{
		//spdlog::set_pattern("%^[%T] %n: %v%$");
		//s_CoreLogger = spdlog::stdout_color_mt("GameEngine");
		//s_CoreLogger->set_level(spdlog::level::trace);
		//
		//s_ClientLogger = spdlog::stdout_color_mt("App");
		//s_ClientLogger->set_level(spdlog::level::trace);
	//}

	void Log::error(const char* args)
	{
		HANDLE stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(stdHandle, RED);
		std::cout << args << std::endl;
	}

	void Log::warn(const char* args)
	{
		HANDLE stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(stdHandle, YELLOW);
		std::cout << args << std::endl;
	}

	void Log::fatal(const char* args)
	{
		HANDLE stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(stdHandle, RED);
		std::cout << args << std::endl;
	}

	void Log::info(const char* args)
	{
		HANDLE stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(stdHandle, BLUE);
		std::cout << args << std::endl;
	}

	void Log::trace(const char* args)
	{
		HANDLE stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(stdHandle, GREEN);
		std::cout << args << std::endl;
	}
}