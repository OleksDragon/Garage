#include "Car.h"

Car::Car() : car(), driver(nullptr), tech_inspection(), police() {}

Car::Car(Vehicle car, Employee* driver, const Inspection& tech_inspection, const Insurance& police)
{
    this->car = car;
    this->driver = driver;
    this->tech_inspection = tech_inspection;
    this->police = police;
}

void Car::set_car(Vehicle car)
{
    this->car = car;
}

void Car::set_driver(Employee* driver)
{
    this->driver = driver;
}

void Car::set_tech_inspection(const Inspection& tech_inspection)
{
    this->tech_inspection = tech_inspection;
}

void Car::set_police(const Insurance& police)
{
    this->police = police;
}

Vehicle Car::get_car() const
{
    return car;
}

Employee* Car::get_driver() const
{
    return driver;
}

const Inspection& Car::get_tech_inspection() const
{
    return tech_inspection;
}

const Insurance& Car::get_police() const
{
    return police;
}

void Car::show_car_info() const
{
    cout << "=================================\n";
    cout << "Информация о машине:" << endl;
    car.show();
    cout << "Водитель:" << endl;
    driver->show();
    cout << "Технический осмотр:" << endl;
    tech_inspection.show_inspection();
    cout << "Страховка:" << endl;
    police.show_insurance();
    cout << "=================================\n";
}
