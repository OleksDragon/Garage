#pragma once
//������ �����������
#include "Employee.h"

class Employees  
{
protected:
    vector<Employee*> employee; // ��������� �����������    
public:
    ~Employees();    

    void add_employee(Employee* obj); // ���������� ����������
    void del_employee(string name, string last_name); // �������� ����������   
    Employee* search_employee(string last_name); // ����� ����������
    void show_info()const;
};

