#include <string>

#ifndef SENECA_SETTINGS_H
#define SENECA_SETTINGS_H

namespace seneca {
    struct Settings {
        bool m_show_all;       // Show all definitions for a word
        bool m_verbose;        // Show detailed output including part of speech
        std::string m_time_units;  // Time units for event durations (e.g., "microseconds", "milliseconds")

        // Constructor with default settings
        Settings(bool showAll = true, bool verbose = false, const std::string& timeUnits = "microseconds");

    };

    extern Settings g_settings;



}


#endif