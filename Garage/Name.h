#pragma once
#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class Name
{
protected:
	string name;
public:
	Name();
	Name(string name);

	void set_name(string name);
	string get_name()const;

	virtual void show()const;
};

