#pragma once
#include "Name.h"
class Company :
    public Name
{
protected:
    string service;
    string telephone;
    string address;
public:
    Company();
    Company(string name, string service, string telephone, string address);

    void set_service(string service);
    void set_telephone(string telephone);
    void set_address(string address);

    string get_service()const;
    string get_telephone()const;
    string get_address()const;

    void show()const override;
};

