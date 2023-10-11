#include "Companies.h"

Companies::Companies()
{

}

Companies::~Companies()
{
	// Освобождение памяти, выделенной для объектов Company
	for (size_t i = 0; i < company.size(); ++i) 
	{
		delete company[i];
	}
	company.clear();
}

void Companies::add_company(Company* obj) // Метод добавления компании
{
	company.push_back(obj);
}

void Companies::del_company(string name) // Метод удаления компании по названию
{
	for (size_t i = 0; i < company.size(); ++i) 
	{
		if (company[i]->get_name() == name) 
		{
			delete company[i];
			company.erase(company.begin() + i);
			break;
		}
	}
}

Company* Companies::search_company(string name) // Метод поиска компании по названию
{
	for (int i = 0; i < company.size(); ++i)
	{
		if (company[i]->get_name() == name)
		{
			return company[i];
		}
	}
	return nullptr;
}

void Companies::show_info() const // Метод вывода информации о компаниях
{
	for (int i = 0; i < company.size(); i++)
	{
		company[i]->show();
	}
}
