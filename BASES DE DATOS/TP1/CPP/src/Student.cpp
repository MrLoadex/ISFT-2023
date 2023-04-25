#include <Student.hpp>

Student::Student(){}
Student::~Student(){}

void Student::setIdentifier(int _identifier)
{
    identifier = _identifier;
}
void Student::setName(string _name)
{
    name = _name;
}
void Student::setSurname(string _surname)
{
    surname = _surname;
}
int Student::getIdentifier()
{
    return identifier;
}
string Student::getName()
{
    return name;
}
string Student::getSurname()
{
    return surname;
}