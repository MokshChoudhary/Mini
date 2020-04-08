#pragma once
#ifdef MN_PLATFORM_WINDOWS

extern Mini::Application* Mini::CreateMiniApplication();

int main(int argv,char** argc) {
	auto app = Mini::CreateMiniApplication();
	app->Run();
	delete app;
	}
#endif // MN_PLATFORM_WINDOWS
