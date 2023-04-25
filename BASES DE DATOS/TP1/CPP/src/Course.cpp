#include <Course.hpp>

Course::Course(){}
Course::~Course(){}

void Course::setIdentifier(int _identifier)
{
    identifier = _identifier;
}
void Course::setName(string _name)
{
    name = _name;
}

int Course::getIdentifier()
{
    return identifier;
}
string Course::getName()
{
    return name;
}
