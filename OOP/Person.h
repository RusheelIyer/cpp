#include <string>
#include "Vehicle.h"
using namespace std;;


#ifndef PERSON_H
#define PERSON_H

class Person {

    private:
        string name;
        int age;
        Vehicle* vehicle;

    public:
        Person(string name, int age, Vehicle* vehicle);

        string get_name();
        int get_age();
        Vehicle get_vehicle();

};
#endif // PERSON_H
