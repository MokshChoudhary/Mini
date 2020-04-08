#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

using namespace spdlog;
namespace Mini {
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClintLogger;

	void Log::Init() {
		set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = stdout_color_mt("MINI");
		s_CoreLogger->set_level(level::trace);
		s_ClintLogger = stdout_color_mt("APP");
		s_ClintLogger->set_level(level::trace);
		 
	}
}