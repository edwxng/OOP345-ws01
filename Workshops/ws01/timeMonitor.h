
#include "event.h"
#include <chrono>



#ifndef SENECA_TIMEMONITOR_H
#define SENECA_TIMEMONITOR_H

namespace seneca {
    class TimeMonitor {
        const char* m_currentEventName;  // Name of the event being timed
        std::chrono::high_resolution_clock::time_point m_startTime;  // Start time of the event

    public:
        // Default constructor
            // Default constructor
        TimeMonitor();

        // Start an event
        void startEvent(const char* eventName);

        // Stop the event and return an Event object
        Event stopEvent();
    };
}






#endif