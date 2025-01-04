#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	// Using spdlog
	//GameEngine::Log::Init();
	//GE_CORE_WARN("Initalized Log!");
	//GE_INFO("Hello!");

	GameEngine::Log* Core = new GameEngine::Log("GameEngine");


	// Using my own Logging
	Core->error("Error Message!");
	Core->warn("Warning Message!");
	Core->info("Info Message");
	Core->trace("Trace Message");
	Core->fatal("Fatal Message");
	

	GameEngine::Application* app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}


#endif