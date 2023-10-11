#pragma once
#include "Vehicle.h"
#include "Employees.h"
#include "Inspection.h"
#include "Insurance.h"

class Car 
{
protected:
    Vehicle car;
    Employee* driver;
    Inspection tech_inspection;
    Insurance police;

public:
    Car();
    Car(Vehicle car, Employee* driver, const Inspection& tech_inspection, const Insurance& police);

    void set_car(Vehicle car);
    void set_driver(Employee* driver);
    void set_tech_inspection(const Inspection& tech_inspection);
    void set_police(const Insurance& police);

    Vehicle get_car() const;
    Employee* get_driver() const;
    const Inspection& get_tech_inspection() const;
    const Insurance& get_police() const;

    void show_car_info() const;
};

