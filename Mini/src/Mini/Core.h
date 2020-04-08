#pragma once
#ifdef MN_PLATFORM_WINDOWS
	#ifdef MN_BUILD_DLL
		#define MINI_API __declspec(dllexport)
	#else
		#define MINI_API __declspec(dllimport)
	#endif // MN_BUILD_DLL
#else	
	#error Mini is only support for Windows system
#endif // MN_PLATFORM_WINDOWS
