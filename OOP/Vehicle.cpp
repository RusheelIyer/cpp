#include<string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string name, int wheels) {
    m_name = name;
    m_wheels = wheels;
}

string Vehicle::get_name() {
    return m_name;
}

void Vehicle::set_name(string name) {
    m_name = name;
}

int Vehicle::get_wheels() {
    return m_wheels;
}

void Vehicle::set_wheels(int val) {
    m_wheels = val;
}
