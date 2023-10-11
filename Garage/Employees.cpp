#include "Employees.h"

//Employees::Employees()
//{    
//	
//}
//
//Employees::Employees(string name, string last_name, string speciality, float salary)
//{		
//	/*Employee* emp = new Employee(name, last_name, speciality, salary);
//	employee.push_back(emp);*/
//}

Employees::~Employees()
{
	// Освободим память, выделенную для объектов Employee
	for (size_t i = 0; i < employee.size(); ++i) 
	{
		delete employee[i];
	}
	employee.clear();
}

void Employees::add_employee(Employee* obj) // Метод добавления сотрудника
{
	employee.push_back(obj);
}

void Employees::del_employee(string name, string last_name) // Метод удаления сотрудника по имени и фамилии
{
	for (size_t i = 0; i < employee.size(); ++i) 
	{
		if (employee[i]->get_name() == name && employee[i]->get_last_name() == last_name) 
		{
			delete employee[i];
			employee.erase(employee.begin() + i);
			break;
		}
	}
}

Employee* Employees::search_employee(string last_name) // Метод поиска сотрудника по фамилии
{	
	for (int i = 0; i < employee.size(); ++i)
	{
		if (employee[i]->get_last_name() == last_name)
		{
			return employee[i];		
		}
	}	
	return nullptr; // Если не найден сотрудник с такой фамилией, возвращаем nullptr
}

void Employees::show_info() const // Метод вывода информации о сотрудниках
{
	for (size_t i = 0; i < employee.size(); ++i) 
	{
		employee[i]->show();
	}
}
