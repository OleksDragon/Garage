#pragma once
#include "Name.h"

class Vehicle :
    public Name
{
protected:
    string license_plat; // гос. номер авто
public:
    Vehicle();
    Vehicle(string license_plat, string name);

    void set_license_plat(string license_plat);
    string get_license_plat()const;

    void show()const override;   
};

