// hour.cpp
#include "../include/hour.h"

// Default constructor
Hour::Hour() : hour(0), minute(0), second(0) {}

// Parameterized constructor
Hour::Hour(int h, int m, int s) : hour(h), minute(m), second(s) {}

// Getter methods
int Hour::getHour() const { return hour; }
int Hour::getMinute() const { return minute; }
int Hour::getSecond() const { return second; }

// Setter methods
void Hour::setHour(int _hour) { hour = _hour; }
void Hour::setMinute(int _minute) { minute = _minute; }
void Hour::setSecond(int _second) { second = _second; }

// Method to return formatted time as a string
std::string Hour::toString() const {
    return std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second);
}

// Overload the '<<' operator for outputting time
std::ostream& operator<<(std::ostream& os, const Hour& h) {
    os << h.toString();
    return os;
}
