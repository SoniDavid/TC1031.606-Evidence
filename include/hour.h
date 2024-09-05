// hour.h
#pragma once
#include <iostream>
#include <string>

class Hour {
private:
    int hour;
    int minute;
    int second;

public:
    // Default constructor
    Hour();

    // Parameterized constructor
    Hour(int, int, int);

    // Getter methods
    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    // Setter methods
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    // Method to return formatted time as a string
    std::string toString() const;

    // Overload the '<<' operator for outputting time
    friend std::ostream& operator<<(std::ostream& os, const Hour& h);
};
