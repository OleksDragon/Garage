#pragma once
#include"Companies.h"
#include"Date.h"

class Insurance
{
protected:
	string number_insurance;
	Date start_policy;
	Date end_policy;
	Company* company;
public:
	Insurance();
	Insurance(string number_insurance, Date start_policy, Date end_policy, Company* company);

	void set_number_insurance(string number_insurance);
	void set_start_policy(Date start_policy);
	void set_end_policy(Date end_policy);
	void set_company(Company* company);

	string get_number_insurance()const;
	Date get_start_policy()const;
	Date get_end_policy()const;
	Company* get_company()const;

	void show_insurance()const;
};

