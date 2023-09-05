#include "Companies.h"

Companies::~Companies()
{
	for (int i = 0; i < company.size(); i++)
	{
		delete company[i];
	}
}

void Companies::add_company(Company* obj)
{
	company.push_back(obj);
}

void Companies::del_company(string name)
{
	for (int i = 0; i < company.size(); i++)
	{
		if (company[i]->get_name() == name)
		{
			company.erase(company.begin() + i);
			break;
		}
	}
}

void Companies::search_company(string service)
{
	for (int i = 0; i < company.size(); i++)
	{
		if (company[i]->get_service() == name)
		{
			company[i]->show();
		}
	}
}

void Companies::show_info() const
{
	for (int i = 0; i < company.size(); i++)
	{
		company[i]->show();
	}
}
