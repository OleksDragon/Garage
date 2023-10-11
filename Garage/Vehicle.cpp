#include "Vehicle.h"

Vehicle::Vehicle()
{
    license_plat = "AX 0000 AX"; // номер авто
    name = "Mercedes Benz"; // марка авто
}

Vehicle::Vehicle(string license_plat, string name):Name(name)
{
    this->license_plat = license_plat;
}

void Vehicle::set_license_plat(string license_plat)
{
    this->license_plat = license_plat;
}

string Vehicle::get_license_plat() const
{
    return license_plat;
}

void Vehicle::show() const
{
    cout << "Гос. номер: " << license_plat << endl;
    cout << "Модель авто: " << name << endl;
}
