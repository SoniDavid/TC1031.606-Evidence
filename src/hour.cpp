#include "../include/hour.h"

Hour::Hour() {
    hourInt = 0;
    minuteInt = 0;
    secondInt = 0;

    hourStr = "0";
    minuteStr = "0";
    secondStr = "0";
}

Hour::Hour(string _hour, string _minute, string _second) {

    hourStr = _hour;
    minuteStr = _minute;
    secondStr = _second;
    
    /* Converts into int for comparision, depending
    if the value is correct the*/
    hourInt = stoi(_hour);
    minuteInt = stoi(_minute);
    secondInt = stoi(_second);

    try {
        hourInt = stoi(_hour);
    } catch (invalid_argument& e) {
        hourInt = -1;
        hourStr = "-1";
    } catch (out_of_range& e) {
        hourInt = -1;
        hourStr = "-1";
    }

    try {
        minuteInt = stoi(_minute);
    } catch (invalid_argument& e) {
        minuteInt = -1;
        minuteStr = "-1";
    } catch (out_of_range& e) {
        minuteInt = -1;
        minuteStr = "-1";
    }

    try {
        secondInt = stoi(_second);
    } catch (invalid_argument& e) {
        secondInt = -1;
        secondStr = "-1";
    } catch (out_of_range& e) {
        secondInt = -1;
        secondStr = "-1";
    }

    // Check for invalid values
    if (hourInt < 0 || hourInt >= 24){ 
        hourInt = -1;
        hourStr = "-1";
    }
    if (minuteInt < 0 || minuteInt >= 60){
        minuteInt = -1;
        minuteStr = "-1";
    }
    if (secondInt < 0 || secondInt >= 60){
        secondInt = -1;
        secondStr = "-1";
    }
}

int Hour::getHourInt() {
    return hourInt;
}

int Hour::getMinuteInt() {
    return minuteInt;
}

int Hour::getSecondInt() {
    return secondInt;
}

void Hour::setHourInt(int _hour) {
    // for formatting into 00:00:00
    if (_hour >= 0 && _hour < 10){
        hourInt = _hour;
        hourStr = "0" + to_string(_hour);
    }
    else if(_hour >= 0 || _hour < 24) {
        hourInt = _hour;
        hourStr = to_string(_hour);
    }
    else {
        hourInt = -1;
        hourStr = "-1";
    }
}

void Hour::setMinuteInt(int _minute) {
    if (_minute >= 0 && _minute < 10){
        minuteInt = _minute;
        minuteStr = "0" + to_string(_minute);
    }
    else if(_minute >= 0 || _minute < 60) {
        minuteInt = _minute;
        minuteStr = to_string(_minute);
    }
    else {
        minuteInt = -1;
        minuteStr = "-1";
    }
}

void Hour::setSecondInt(int _second) {
    if (_second >= 0 && _second < 10){
        secondInt = _second;
        secondStr = "0" + to_string(_second);
    }
    else if(_second >= 0 || _second < 60) {
        secondInt = _second;
        secondStr = to_string(_second);
    }
    else {
        secondInt = -1;
        secondStr = "-1";
    }
}

string Hour::getHourStr() {
    return hourStr;
}

string Hour::getMinuteStr() {
    return minuteStr;
}

string Hour::getSecondStr() {
    return secondStr;
}

void Hour::setHourStr(string _hour) {
    hourInt = stoi(_hour);
    setHourInt(hourInt);
}

void Hour::setMinuteStr(string _minute) {
    minuteInt = stoi(_minute);
    setMinuteInt(minuteInt);
}

void Hour::setSecondStr(string _second) {
    secondInt = stoi(_second);
    setSecondInt(secondInt);
}

void Hour::printHour() {
    cout << hourStr << ":" << minuteStr << ":" << secondStr << endl;
}
