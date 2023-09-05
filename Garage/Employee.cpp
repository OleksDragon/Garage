#include "Employee.h"

Employee::Employee()
{
    last_name = "no name";
    first_name = "no name";
}

Employee::Employee(string last_name, string first_name, string name):Name(name)
{
    this->last_name = last_name;
    this->first_name = first_name;
}

void Employee::set_last_name(string last_name)
{
    this->last_name = last_name;
}

void Employee::set_first_name(string first_name)
{
    this->first_name = first_name;
}

string Employee::get_last_name() const
{
    return last_name;
}

string Employee::get_first_name() const
{
    return first_name;
}

void Employee::show() const
{
    cout << "Last name: " << last_name << endl;
    cout << "First name: " << first_name << endl;
    cout << "Speciality: " << name << endl;
}
