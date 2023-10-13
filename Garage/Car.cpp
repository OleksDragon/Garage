#include "Car.h"

Car::Car() : driver(nullptr), tech_inspection(), police() {}

Car::Car(Vehicle car, Employee* driver, const Inspection& tech_inspection, const Insurance& police)
{
    this->set_name(car.get_name());
    this->set_license_plat(car.get_license_plat());
    this->driver = driver;
    this->tech_inspection = tech_inspection;
    this->police = police;
}

void Car::set_car(Vehicle car)
{
    this->set_name(car.get_name());
    this->set_license_plat(car.get_license_plat());
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
    return *this;
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
    this->show();
    cout << "Водитель:" << endl;
    driver->show();
    cout << "Технический осмотр:" << endl;
    tech_inspection.show_inspection();
    cout << "Страховка:" << endl;
    police.show_insurance();
    cout << "=================================\n";
}
