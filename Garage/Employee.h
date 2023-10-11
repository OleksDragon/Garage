#pragma once
#include "Name.h"
class Employee :
    public Name
{
protected:
    string last_name; // Фамилия сотрудника
    string speciality;  // специальность 
    float salary; // зарплата сотрудника
public:
    Employee();
    Employee(string name, string last_name, string speciality, float salary);

    void set_last_name(string last_name);    
    void set_speciality(string speciality);
    void set_salary(float salary);    

    string get_last_name()const;    
    string get_speciality()const;
    float get_salary()const;

    void show()const override;
};

