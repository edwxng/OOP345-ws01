
#include "timeMonitor.h"

namespace seneca {
    TimeMonitor::TimeMonitor() : m_currentEventName(nullptr) {}

    // Start an event
    void TimeMonitor::startEvent(const char* eventName) {
        m_currentEventName = eventName;
        m_startTime = std::chrono::high_resolution_clock::now();
    }

    // Stop the event and return an Event object
    Event TimeMonitor::stopEvent() {
        auto endTime = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - m_startTime);
        return Event(m_currentEventName, duration);
    }
}