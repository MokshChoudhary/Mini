#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Mini {

	class MINI_API Log
	{
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClintLogger;

	public :
		void static Init();

		inline static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger> GetClintLogger() { return s_ClintLogger; }

	};

}



//Core log macro
#define MN_CORE_ERROR(...) ::Mini::Log::GetCoreLogger()->error(__VA_ARGS__);
#define MN_CORE_TRACE(...) ::Mini::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define MN_CORE_WARN(...)  ::Mini::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define MN_CORE_INFO(...)  ::Mini::Log::GetCoreLogger()->info(__VA_ARGS__);
#define MN_CORE_FATAL(...) ::Mini::Log::GetCoreLogger()->fatal(__VA_ARGS__);

//Client log macro
#define MN_ERROR(...) ::Mini::Log::GetClintLogger()->error(__VA_ARGS__);
#define MN_TRACE(...) ::Mini::Log::GetClintLogger()->trace(__VA_ARGS__);
#define MN_WARN(...)  ::Mini::Log::GetClintLogger()->warn(__VA_ARGS__);
#define MN_INFO(...)  ::Mini::Log::GetClintLogger()->info(__VA_ARGS__);
#define MN_FATAL(...) ::Mini::Log::GetClintLogger()->fatal(__VA_ARGS__);