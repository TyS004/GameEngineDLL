#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	GameEngine::Log::Init();
	GE_CORE_WARN("Initalized Log!");
	GE_INFO("Hello!");

	GameEngine::Application* app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif