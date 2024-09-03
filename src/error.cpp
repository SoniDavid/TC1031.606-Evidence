#include <iostream>
#include "../include/error.h"

using namespace std;

Error::Error() {
    month = "Jan";
    day = 1;
    time = Hour();
    ip = IPDirection();
}

Error::Error(string month, int day, int hour, int minute, int second, int part1, int part2, int part3, int part4, int part5, vector<string> message) {
    this->month = month;
    this->day = day;
    this->time = Hour(hour, minute, second);
    this->ip = IPDirection(part1, part2, part3, part4, part5);
    this->message = message; // Assign the message vector to the class member
}

void Error::printError() {
    cout << month << " " << day << " " << time.getHour() << ":" << time.getMinute() << ":" << time.getSecond() << " " << ip.getIPDirection() << " ";
    if (message.size() > 0) {
        for (int i = 0; i < message.size(); i++) {
            cout << message[i] << " ";
        }
    }
    cout << endl;
}

string Error::getError() {
    string error = month + " " + to_string(day) + " " + to_string(time.getHour()) + ":" + to_string(time.getMinute()) + ":" + to_string(time.getSecond()) + " " + ip.getIPDirection() + " ";
    if (message.size() > 0) {
        for (int i = 0; i < message.size(); i++) {
            error += message[i] + " ";
        }
    }
    return error;
}