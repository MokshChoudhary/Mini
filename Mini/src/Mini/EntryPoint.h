#pragma once
#ifdef MN_PLATFORM_WINDOWS

extern Mini::Application* Mini::CreateMiniApplication();

int main(int argv,char** argc) {

	Mini::Log::Init();

	MN_INFO("Hello!");
	MN_CORE_WARN("Initilizing Application");
	
	auto app = Mini::CreateMiniApplication();
	app->Run();
	delete app;
	}
#endif // MN_PLATFORM_WINDOWS