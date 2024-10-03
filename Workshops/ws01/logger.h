
#include <iostream>
#include "event.h"
#include <vector>

#ifndef SENECA_LOGGER_H
#define SENECA_LOGGER_H

namespace seneca {
    class Logger {
        std::vector<Event> m_events;  // Dynamically grows to store events

    public:
        // Default constructor
        Logger();

        // Move constructor
        Logger(Logger&& other) noexcept;

        // Move assignment operator
        Logger& operator=(Logger&& other) noexcept;

        // Destructor
        ~Logger();

        // Add an event to the logger
        void addEvent(const Event& event);

        // Overload << operator to print all logged events
        friend std::ostream& operator<<(std::ostream& os, const Logger& logger);
    };
}





#endif