#include "event.h"

namespace seneca {
    Event::Event() : m_name(""), m_duration(0) {}

    // Parameterized constructor
    Event::Event(const char* name, const std::chrono::nanoseconds& duration)
        : m_name(name), m_duration(duration) {}

    // Overload << operator for Event class
    std::ostream& operator<<(std::ostream& os, const Event& event) {
        os << "COUNTER: " << event.m_name << " -> "
            << std::chrono::duration_cast<std::chrono::microseconds>(event.m_duration).count()
            << " microseconds";
        return os;
    }
}