#include <iostream>
#include "../include/error.h"

using namespace std;

Error::Error() {
    month = "Jan";
    day = 1;
    time = Hour();
    ip = IPDirection();
}

Error::Error(string month, int day, string hour, string minute, string second, string part1, string part2, string part3, string part4, string part5, vector<string> message) {
    this->month = month;
    this->day = day;
    this->time = Hour(hour, minute, second);
    this->ip = IPDirection(part1, part2, part3, part4, part5);
    this->message = message; // Assign the message vector to the class member
}

void Error::printError() {
    cout << month << " " << day << " " << time.getHourStr() << ":" << time.getMinuteStr() << ":" << time.getSecondStr() << " " << ip.getIPDirection() << " ";
    if (message.size() > 0) {
        for (int i = 0; i < message.size(); i++) {
            cout << message[i] << " ";
        }
    }
    cout << endl;
}

string Error::getError() {
    string error = month + " " + to_string(day) + " " + time.getHourStr() + ":" + time.getMinuteStr() + ":" + time.getSecondStr() + " " + ip.getIPDirection() + " ";
    if (message.size() > 0) {
        for (int i = 0; i < message.size(); i++) {
            error += message[i] + " ";
        }
    }
    return error;
}