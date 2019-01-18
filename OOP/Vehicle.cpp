#include<string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string name, int wheels) {
    name = name;
    wheels = wheels;
}

string Vehicle::get_name() {
    return this->name;
}

void Vehicle::set_name(string name) {
    name = name;
}

int Vehicle::get_wheels() {
    return wheels;
}

void Vehicle::set_wheels(int val) {
    wheels = val;
}
