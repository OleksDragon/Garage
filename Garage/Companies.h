#pragma once
#include "Company.h"
class Companies :
    public Company
{
protected:
    vector<Company*> company;
public:
    Companies();
    ~Companies();

    void add_company(Company* obj);
    void del_company(string name);
    void search_company(string service);
    void show()const override;
};

