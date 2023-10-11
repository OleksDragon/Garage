#include "Garage.h"
#include <algorithm>

void Garage::add_car(const Car& car) 
{
    cars[car.get_car().get_license_plat()] = car;
}

void Garage::remove_car(const string& license_plate) 
{
    cars.erase(license_plate);
}

Car* Garage::find_car_by_license_plate(const string& license_plate) 
{
    auto it = cars.find(license_plate);
    if (it != cars.end()) 
    {
        return &it->second;
    }
    else 
    {
        return nullptr;
    }
}

vector<Car> Garage::find_cars_by_make(const string& make) 
{
    vector<Car> result;
    for (const auto& pair : cars) 
    {
        const Car& car = pair.second;
        if (car.get_car().get_name() == make) 
        {
            result.push_back(car);
        }
    }
    return result;
}

Date get_current_date() // Получаем текущую дату.
{
    time_t t = time(0);
    tm now;
    localtime_s(&now, &t);

    Date current_date(now.tm_mday, now.tm_mon + 1, now.tm_year + 1900);
    return current_date;
}

vector<Car> Garage::find_cars_with_expiring_insurance()
{   
    vector<Car> result;

    Date current_date = get_current_date();

    for (const auto& pair : cars)
    {
        const Car& car = pair.second;
        const Insurance& insurance = car.get_police();

        if (insurance.get_end_policy() - current_date <= 30)
        {
            result.push_back(car);
        }
    }
    return result;
}

vector<Car> Garage::find_cars_with_expiring_tech_inspection()
{
    vector<Car> result;
    Date current_date = get_current_date();

    for (const auto& pair : cars)
    {
        const Car& car = pair.second;
        const Inspection& inspection = car.get_tech_inspection();

        if (inspection.get_next_inspection() - current_date <= 30)
        {
            result.push_back(car);
        }
    }
    return result;
}

void Garage::sort_cars_by_make() 
{
    vector<Car> temp;
    for (const auto& pair : cars) 
    {
        temp.push_back(pair.second);
    }

    sort(temp.begin(), temp.end(), [](const Car& a, const Car& b) 
        {
        return a.get_car().get_name() < b.get_car().get_name();
        });

    cars.clear();
    for (const auto& car : temp) 
    {
        cars[car.get_car().get_license_plat()] = car;
    }
}

void Garage::show_all_cars() const 
{
    for (const auto& pair : cars) 
    {
        pair.second.show_car_info();
    }
}