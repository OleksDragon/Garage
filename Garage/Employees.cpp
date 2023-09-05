#include "Employees.h"

Employees::Employees(float salary)
{
    this->salary = salary;
}

Employees::~Employees()
{
	for (int i = 0; i < employee.size(); i++)
	{
		delete employee[i];
	}
}

void Employees::set_salary(float salary)
{
	this->salary = salary;
}

float Employees::get_salary() const
{
    return salary;
}

void Employees::add_employee(Employee* obj)
{
	employee.push_back(obj);
}

void Employees::del_employee(string name)
{
	for (int i = 0; i < employee.size(); i++)
	{
		if (employee[i]->get_last_name() == name)
		{
			employee.erase(employee.begin() + i);
			break;
		}
	}
}

void Employees::search_employee(string name)
{
	for (int i = 0; i < employee.size(); i++)
	{
		if (employee[i]->get_last_name() == name)
		{
			employee[i]->show();
		}
	}
}

void Employees::show() const
{
	Employee::show();
	cout << "Salary: " << salary << endl;
}
