#pragma once
#include "Name.h"
class Employee :
    public Name
{
protected:
    string last_name; // Фамилия сотрудника
    string first_name; // Имя сотрудника
    float salary; // зарплата сотрудника
public:
    Employee();
    Employee(string last_name, string first_name, string name, float salary);

    void set_last_name(string last_name);
    void set_first_name(string first_name);
    void set_salary(float salary);

    string get_last_name()const;
    string get_first_name()const;
    float get_salary()const;

    void show()const override;
};

