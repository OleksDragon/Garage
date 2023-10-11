#pragma once
#include "Company.h"
#include"Date.h"
#include"Companies.h"

class Inspection
{
protected:
	string number_inspection;
	Company* company;
	Date date_inspection;
	Date next_inspection;	
public:
	Inspection();
	Inspection(string number_inspection, Company* company, Date date_inspection, Date next_inspection);

	void set_number(string number_inspection);
	void set_company(Company* company);
	void set_date_inspection(Date date_inspection);
	void set_next_inspection(Date next_inspection);	

	string get_number_inspection()const;
	Company* get_company()const;
	Date get_date_inspection()const;
	Date get_next_inspection()const;	

	void show_inspection()const;
};

