#include "Employee.h"

Employee::Employee()
{
    last_name = "no name"; // фамилия
    first_name = "no name"; // имя
    name = "no speciality"; // специальность
    salary = 0; // зарплата
}

Employee::Employee(string last_name, string first_name, string name, float salary):Name(name)
{
    this->last_name = last_name;
    this->first_name = first_name;
    this->salary = salary;
}

void Employee::set_last_name(string last_name)
{
    this->last_name = last_name;
}

void Employee::set_first_name(string first_name)
{
    this->first_name = first_name;
}

void Employee::set_salary(float salary)
{
    this->salary = salary;
}

string Employee::get_last_name() const
{
    return last_name;
}

string Employee::get_first_name() const
{
    return first_name;
}

float Employee::get_salary() const
{
    return salary;
}

void Employee::show() const
{
    cout << "Last name: " << last_name << endl;
    cout << "First name: " << first_name << endl;
    cout << "Speciality: " << name << endl;
    cout << "Salary: " << salary << endl;
}
