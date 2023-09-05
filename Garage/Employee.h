#pragma once
#include "Name.h"
class Employee :
    public Name
{
protected:
    string last_name; // Фамилия сотрудника
    string first_name; // Имя сотрудника
public:
    Employee();
    Employee(string last_name, string first_name, string name);

    void set_last_name(string last_name);
    void set_first_name(string first_name);

    string get_last_name()const;
    string get_first_name()const;

    void show()const override;
};

