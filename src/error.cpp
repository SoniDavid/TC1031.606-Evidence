// error.cpp
#include "../include/error.h"

// Default constructor
Error::Error() : month(""), day(0), time(Hour()), ip(IPDirection()) {}

// Parameterized constructor
Error::Error(std::string m, int d, int h, int min, int s, int p1, int p2, int p3, int p4, int prt, std::vector<std::string> msg)
    : month(m), day(d), time(Hour(h, min, s)), ip(IPDirection(p1, p2, p3, p4, prt)), message(msg) {}

// Method to print the error details
void Error::printError() const {
    std::cout << getError() << std::endl;
}

// Method to return error details as a string
std::string Error::getError() const {
    std::ostringstream oss;
    oss << month << " " << day << " " << time << " " << ip << " ";
    for (const auto& word : message) {
        oss << word << " ";
    }
    return oss.str();
}

// Overload '<' operator to compare Error objects based on date and time
bool Error::operator<(const Error& other) const {
    if (month != other.month) return month < other.month;
    if (day != other.day) return day < other.day;
    if (time.getHour() != other.time.getHour()) return time.getHour() < other.time.getHour();
    if (time.getMinute() != other.time.getMinute()) return time.getMinute() < other.time.getMinute();
    return time.getSecond() < other.time.getSecond();
}

// Overload '<<' operator for outputting Error objects
std::ostream& operator<<(std::ostream& os, const Error& e) {
    os << e.getError();
    return os;
}
