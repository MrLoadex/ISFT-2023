#ifndef Course_hpp
    #define Course_hpp


#include <string>
using namespace std;

class Course{
private:
int identifier;
string name;
public:
    Course(),
    ~Course();
    void setIdentifier(int _identifier);
    void setName(string _name);
    int getIdentifier();
    string getName();
};

#endif