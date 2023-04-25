#ifndef Student_hpp
    #define Student_hpp

#include <string>
using namespace std;

class Student{
private:
int identifier;
string name, surname;
public:
    Student();
    ~Student();
    void setIdentifier(int _identifier);
    void setName(string _name);
    void setSurname(string _surname);
    int getIdentifier();
    string getName();
    string getSurname();
};

#endif