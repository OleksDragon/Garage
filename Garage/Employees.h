#pragma once
//Список сотрудников
#include "Employee.h"
class Employees :
    public Employee
{
protected:
    vector<Employee*> employee; // контейнер сотрудников
    float salary; // зарплата сотрудника
public:    
    Employees();
    ~Employees();

    void set_salary(float salary);
    float get_salary()const;

    void add_employee(Employee* obj); // Добавление сотрудника
    void del_employee(string name); // Удаление сотрудника   
    void search_employee(string name); // Поиск сотрудника
    void show_info()const;
};

