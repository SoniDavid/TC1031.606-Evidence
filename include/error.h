// error.h
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "hour.h"
#include "ipDirection.h"

class Error {
private:
    std::string month;
    int day;
    Hour time; // Hour class
    IPDirection ip; // IPDirection class 
    std::vector<std::string> message; // Error message

public:
    // Default constructor
    Error();

    // Parameterized constructor
    Error(std::string, int, int, int, int, int, int, int, int, int, std::vector<std::string>);

    // Method to print the error details
    void printError() const;

    // Method to return error details as a string
    std::string getError() const;

    // Overload '<' operator to compare Error objects based on date and time
    bool operator<(const Error& other) const;

    // Overload '<<' operator for outputting Error objects
    friend std::ostream& operator<<(std::ostream& os, const Error& e);
};
