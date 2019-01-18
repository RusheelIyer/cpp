#include <string>
#include "Person.h"
#include "Vehicle.h"

using namespace std;

Person::Person(string name, int age, Vehicle* vehicle) {
    name = name;
    age = age;
    vehicle = vehicle;
}

string Person::get_name() {
    return name;
}

int Person::get_age() {
    return age;
}

Vehicle Person::get_vehicle() {
    return *vehicle;
}
