#include "Inspection.h"

Inspection::Inspection()
{
    number_inspection = "no number";
}

Inspection::Inspection(string number_inspection, Company* company, Date date_inspection, Date next_inspection)
{
    this->number_inspection = number_inspection;
    this->company = company;
    this->date_inspection = date_inspection;
    this->next_inspection = next_inspection;        
}

void Inspection::set_number(string number_inspection)
{
    this->number_inspection = number_inspection;
}

void Inspection::set_company(Company* company)
{
    this->company = company;
}

void Inspection::set_date_inspection(Date date_inspection)
{
    this->date_inspection = date_inspection;
}

void Inspection::set_next_inspection(Date next_inspection)
{
    this->next_inspection = next_inspection;
}


string Inspection::get_number_inspection() const
{
    return number_inspection;
}

Company* Inspection::get_company() const
{
    return company;
}

Date Inspection::get_date_inspection() const
{
    return date_inspection;
}

Date Inspection::get_next_inspection() const
{
    return next_inspection;
}

void Inspection::show_inspection() const
{
    cout << "Номер талона тех.осмотра: " << number_inspection << endl;    
    cout << "Дата прохождения тех.осмотра: " << date_inspection << endl;
    cout << "Дата следующего тех.осмотра: " << next_inspection << endl;
    company->show();
}
