#pragma once
#include "Employee.h"
class Employees :
    public Employee
{
protected:
    vector<Employee*> employee; // контейнер сотрудников
    float salary; // зарплата сотрудника
public:    
    Employees(float salary);
    ~Employees();

    void set_salary(float salary);
    float get_salary()const;

    void add_employee(Employee* obj);
    void del_employee(string name);    
    void search_employee(string name);
    void show()const override;
};

