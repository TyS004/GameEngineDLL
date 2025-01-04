#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	// Using spdlog
	//GameEngine::Log::Init();
	//GE_CORE_WARN("Initalized Log!");
	//GE_INFO("Hello!");

	// Using my own Logging
	GE_CORE_ERROR("Error Message!");
	GE_CORE_WARN("Warning Message!");
	GE_CORE_INFO("Info Message");
	GE_CORE_TRACE("Trace Message");
	GE_CORE_FATAL("Fatal Message");
	

	GameEngine::Application* app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif