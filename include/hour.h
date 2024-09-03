#pragma once

#include <iostream>
#include <string>

using namespace std;

class Hour {
private:
    int hour;
    int minute;
    int second;
public:
    Hour();
    Hour(int hour, int minute, int second);
    int getHour();
    int getMinute();
    int getSecond();
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

};