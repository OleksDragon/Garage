#pragma once

#include <map>
#include <ctime>
#include "Car.h"
using std::map;

class Garage {
private:
    map<string, Car> cars;

public:
    void add_car(const Car& car);
    void remove_car(const string& license_plate);
    Car* find_car_by_license_plate(const string& license_plate);    
    vector<Car> find_cars_by_make(const string& make);
    vector<Car> find_cars_with_expiring_insurance();
    vector<Car> find_cars_with_expiring_tech_inspection();    
    void sort_cars_by_make();
    void show_all_cars() const;
};

