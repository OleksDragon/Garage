#pragma once
//Список сотрудников
#include "Employee.h"

class Employees  
{
protected:
    vector<Employee*> employee; // контейнер сотрудников    
public:
    ~Employees();    

    void add_employee(Employee* obj); // Добавление сотрудника
    void del_employee(string name, string last_name); // Удаление сотрудника   
    Employee* search_employee(string last_name); // Поиск сотрудника
    void show_info()const;
};

