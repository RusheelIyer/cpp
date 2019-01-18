#include <iostream>
#include "Person.h"
#include "Vehicle.h"

using namespace std;

int main()
{
    Vehicle person_car("Ford", 4);
    Person john("john", 20, &person_car);

    cout << "My name is " << john.get_name() << " and I am " << john.get_age() << " years old." << endl;
    cout << "I own a " << john.get_vehicle().get_name() << " which has " << person_car.get_wheels() << " wheels." << endl;

}
