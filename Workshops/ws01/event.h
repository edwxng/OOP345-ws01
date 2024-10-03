
#ifndef SENECA_EVENT_H
#define SENECA_EVENT_H

#include <iostream>
#include <chrono>
#include <string>


namespace seneca {


    class Event {
        std::string m_name;
        std::chrono::nanoseconds m_duration;

    public:
        // Default constructor
        Event();

        // Parameterized constructor
        Event(const char* name, const std::chrono::nanoseconds& duration);

        // Friend function to overload << operator
        friend std::ostream& operator<<(std::ostream& os, const Event& event);
    };

}

#endif