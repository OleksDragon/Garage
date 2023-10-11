#include "Employee.h"

Employee::Employee()
{
    name = "no name"; // ���
    last_name = "no name"; // �������    
    speciality = "no speciality"; // �������������    
}

Employee::Employee(string name, string last_name, string speciality, float salary):Name(name)
{
    this->last_name = last_name;    
    this->speciality = speciality;
    this->salary = salary;
}

void Employee::set_last_name(string last_name)
{
    this->last_name = last_name;
}

void Employee::set_speciality(string speciality)
{
    this->speciality = speciality;
}

void Employee::set_salary(float salary)
{
    this->salary = salary;
}

string Employee::get_last_name() const
{
    return last_name;
}

string Employee::get_speciality() const
{
    return speciality;
}

float Employee::get_salary() const
{
    return salary;
}

void Employee::show() const
{    
    cout << "���: " << name << endl;
    cout << "�������: " << last_name << endl;    
    cout << "�������������: " << speciality << endl;    
    cout << "��������: " << salary << endl;
    cout << "--------------------------------\n";
}
