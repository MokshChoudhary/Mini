#pragma once
#include "Core.h"

namespace Mini {
	class MINI_API Application
	{
	public:
		Application();

		virtual ~Application();

		void Run();

	};

	//to use at Client side
	Application* CreateMiniApplication();

}