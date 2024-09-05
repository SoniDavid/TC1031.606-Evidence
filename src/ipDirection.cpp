#include <iostream>
#include <string>

#include "../include/ipDirection.h"

using namespace std;

IPDirection::IPDirection() {
    // despues le cambio los nombres 
    int part1 = 0; 
    int part2 = 0;
    int part3 = 0;
    int part4 = 0;
    int part5 = 0;
}

IPDirection::IPDirection(string _p1, string _p2, string _p3, string _p4, string _p5) 
: p1(_p1), p2(_p2), p3(_p3), p4(_p4), p5(_p5) {}

string IPDirection::getP1() {
    return p1;
}

string IPDirection::getP2() {
    return p2;
}

string IPDirection::getP3() {
    return p3;
}

string IPDirection::getP4() {
    return p4;
}

string IPDirection::getP5() {
    return p5;
}


string IPDirection::getIPDirection() {
    return p1 + "." + p2 + "." + p3 + "." + p4 + ":" + p5;
}




