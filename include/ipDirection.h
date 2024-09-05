#pragma once

#include <iostream>
#include <string>

using namespace std;

class IPDirection{
private:
    int part1;
    int part2;
    int part3;
    int part4;
    int part5;

public:
    IPDirection();
    IPDirection(int, int, int, int, int);
    int getPart1();
    int getPart2();
    int getPart3();
    int getPart4();
    int getPart5();
    void setPart1(int);
    void setPart2(int);
    void setPart3(int);
    void setPart4(int);
    void setPart5(int);

    string getIPDirection();
    
    // Method to return formatted IP as a string
    std::string toString() const {
        return std::to_string(part1) + "." + std::to_string(part2) + "." +
               std::to_string(part3) + "." + std::to_string(part4) + ":";
    }

    // Overload the '<<' operator for outputting IP
    friend std::ostream& operator<<(std::ostream& os, const IPDirection& ip) {
        os << ip.toString();
        return os;
    }
};