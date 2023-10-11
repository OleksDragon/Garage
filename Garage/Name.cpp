#include "Name.h"

Name::Name()
{
    name = "no name";
}

Name::Name(string name)
{
    this->name = name;
}

void Name::set_name(string name)
{
    this->name = name;
}

string Name::get_name() const
{
    return name;
}
