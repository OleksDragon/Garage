#pragma once
#include "Company.h"
class Companies
{
protected:
    vector<Company*> company;
public:
    Companies(); // ����������� �� ���������
    ~Companies();

    void add_company(Company* obj);
    void del_company(string name);
    Company* search_company(string name);
    void show_info()const;
};

