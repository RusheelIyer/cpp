#include <string>
#include "Person.h"
#include "Vehicle.h"

using namespace std;

Person::Person(string name, int age, Vehicle* vehicle) {
    m_name = name;
    m_age = age;
    m_vehicle = vehicle;
}

string Person::get_name() {
    return m_name;
}

int Person::get_age() {
    return m_age;
}

Vehicle Person::get_vehicle() {
    return *m_vehicle;
}
