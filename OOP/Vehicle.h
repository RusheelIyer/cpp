#include <string>

using namespace std;;


#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
    public:

        Vehicle(string name, int wheels);
        string get_name();
        void set_name(string name);
        int get_wheels();
        void set_wheels(int val);
    private:
        string m_name;
        int m_wheels;
};

#endif // VEHICLE_H
