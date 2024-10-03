#include "settings.h"

namespace seneca {
	Settings g_settings(true, false, "microseconds");

	Settings::Settings(bool showAll, bool verbose, const std::string& timeUnits)
		: m_show_all(showAll), m_verbose(verbose), m_time_units(timeUnits) {}
}
