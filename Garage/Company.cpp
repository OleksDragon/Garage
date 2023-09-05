#include "Company.h"

Company::Company()
{
    name = " no name company"; // название компании
    service = "no service"; // какие услуги оказывает (продажа, страховка, тех.осмотр)
    telephone = "no telephone"; // телефон компании
    address = "no address"; // адрес компании
}

Company::Company(string name, string service, string telephone, string address):Name(name)
{
    this->service = service;
    this->telephone = telephone;
    this->address = address;
}

void Company::set_service(string service)
{
    this->service = service;
}

void Company::set_telephone(string telephone)
{
    this->telephone = telephone;
}

void Company::set_address(string address)
{
    this->address = address;
}

string Company::get_service() const
{
    return service;
}

string Company::get_telephone() const
{
    return telephone;
}

string Company::get_address() const
{
    return address;
}

void Company::show() const
{
    cout << "Company: " << name << endl;
    cout << "Service: " << service << endl;
    cout << "telephone: " << telephone << endl;
    cout << "address: " << address << endl;
}
