#include "../include/hour.h"

Hour::Hour() {
    hour = 0;
    minute = 0;
    second = 0;
}

Hour::Hour(int _hour, int _minute, int _second) {

    if (hour >= 0 || hour < 24) {
        hour = _hour;
    }
    else {
        hour = 0;
    }
    
    if (minute >= 0 || minute < 60) {
        minute = _minute;
    }
    else {
        minute = 0;
    }

    if (second >= 0 || second < 60) {
        second = _second;
    }
    else {
        second = 0;
    }

}

int Hour::getHour() {
    return hour;
}

int Hour::getMinute() {
    return minute;
}

int Hour::getSecond() {
    return second;
}

void Hour::setHour(int _hour) {
    if (_hour >= 0 || _hour < 24) {
        hour = _hour;
    }
    else {
        hour = 0;
    }
    
}

void Hour::setMinute(int _minute) {
    
    if (_minute >= 0 || _minute < 60) {
        minute = _minute;
    }
    else {
        minute = 0;
    }
}

void Hour::setSecond(int _second) {
    if (_second >= 0 || _second < 60) {
        second = _second;
    }
    else {
        second = 0;
    }
}



