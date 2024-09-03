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

IPDirection::IPDirection(int _part1, int _part2, int _part3, int _part4, int _part5)
: part1(_part1), part2(_part2), part3(_part3), part4(_part4), part5(_part5) {}


int IPDirection::getPart1() {
    return part1;
}

int IPDirection::getPart2() {
    return part2;
}

int IPDirection::getPart3() {
    return part3;
}

int IPDirection::getPart4() {
    return part4;
}

int IPDirection::getPart5() {
    return part5;
}

void IPDirection::setPart1(int _part1) {
    part1 = _part1;
}

void IPDirection::setPart2(int _part2) {
    part2 = _part2;
}

void IPDirection::setPart3(int _part3) {
    part3 = _part3;
}

void IPDirection::setPart4(int _part4) {
    part4 = _part4;
}

void IPDirection::setPart5(int _part5) {
    part5 = _part5;
}

string IPDirection::getIPDirection() {
    return to_string(part1) + "." + to_string(part2) + "." + to_string(part3) + "." + to_string(part4) + ":" + to_string(part5);
}




