#include <iostream>

#include "Log.h"

//#include "spdlog/sinks/stdout_color_sinks.h"

namespace GameEngine {

	//std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	//std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	// Setting Color Values for Console
	const int Log::BLUE = 1;
	const int Log::GREEN = 2;
	const int Log::RED = 4;
	const int Log::YELLOW = 6;

	//Setting Output Console Handle
	HANDLE Log::stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	//void Log::Init()
	//{
		//spdlog::set_pattern("%^[%T] %n: %v%$");
		//s_CoreLogger = spdlog::stdout_color_mt("GameEngine");
		//s_CoreLogger->set_level(spdlog::level::trace);
		//
		//s_ClientLogger = spdlog::stdout_color_mt("App");
		//s_ClientLogger->set_level(spdlog::level::trace);
	//}

	Log::Log()
	{
		Log::name = "";
	}
	
	Log::Log(const char* name)
	{
		Log::name = name;
	}

	Log::~Log()
	{
		delete this;
	}

	void Log::error(const char* args)
	{
		SetConsoleTextAttribute(stdHandle, RED);
		std::cout << name << " " << args << std::endl;
	}

	void Log::warn(const char* args)
	{
		SetConsoleTextAttribute(stdHandle, YELLOW);
		std::cout << name << " " << args << std::endl;
	}

	void Log::fatal(const char* args)
	{
		SetConsoleTextAttribute(stdHandle, RED);
		std::cout << name << " " << args << std::endl;
	}

	void Log::info(const char* args)
	{
		SetConsoleTextAttribute(stdHandle, BLUE);
		std::cout << name << " " << args << std::endl;
	}

	void Log::trace(const char* args)
	{
		SetConsoleTextAttribute(stdHandle, GREEN);
		std::cout << name << " " << args << std::endl;
	}
}