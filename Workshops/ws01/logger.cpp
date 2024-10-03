
#include "logger.h"

namespace seneca {
    Logger::Logger() = default;

    // Move constructor
    Logger::Logger(Logger&& other) noexcept : m_events(std::move(other.m_events)) {}

    // Move assignment operator
    Logger& Logger::operator=(Logger&& other) noexcept {
        if (this != &other) {
            m_events = std::move(other.m_events);
        }
        return *this;
    }

    // Destructor
    Logger::~Logger() = default;

    // Add an event
    void Logger::addEvent(const Event& event) {
        m_events.push_back(event);
    }

    // Overload << operator to print all events
    std::ostream& operator<<(std::ostream& os, const Logger& logger) {
        for (const auto& event : logger.m_events) {
            os << event << std::endl;
        }
        return os;
    }
}