#include "Insurance.h"

Insurance::Insurance()
{
    number_insurance = "0000";
}

Insurance::Insurance(string number_insurance, Date start_policy, Date end_policy, Company* company)
{
    this->number_insurance = number_insurance;
    this->start_policy = start_policy;
    this->end_policy = end_policy;
    this->company = company;
}

void Insurance::set_number_insurance(string number_insurance)
{
    this->number_insurance = number_insurance;
}

void Insurance::set_start_policy(Date start_policy)
{
    this->start_policy = start_policy;
}

void Insurance::set_end_policy(Date end_policy)
{
    this->end_policy = end_policy;
}

void Insurance::set_company(Company* company)
{
    this->company = company;
}

string Insurance::get_number_insurance() const
{
    return number_insurance;
}

Date Insurance::get_start_policy() const
{
    return start_policy;
}

Date Insurance::get_end_policy() const
{
    return end_policy;
}

Company* Insurance::get_company() const
{
    return company;
}

void Insurance::show_insurance() const
{
    cout << "Номер страховки: " << number_insurance << endl;
    cout << "Дата начала: " << start_policy << endl;
    cout << "Дата окончания: " << end_policy << endl;    
    company->show();
}
