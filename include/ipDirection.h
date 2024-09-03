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
};