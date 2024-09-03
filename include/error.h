#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "hour.h"
#include "ipDirection.h"

using namespace std;

class Error {
private:
    string month;
    int day;
    Hour time; // hour class
    IPDirection ip; // ipDirection class 
    vector<string> message; // error message, se guarda asi porque puede ser de varias palabras y es mas facil leerlo asi

public:
    Error();
    Error(string, int, int, int, int, int, int, int, int, int, vector<string>);
    void printError();
    string getError();
};
