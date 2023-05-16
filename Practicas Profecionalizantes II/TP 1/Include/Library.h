//lase abstracta
#ifndef Library_h
    #define Library_h

#include <windows.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
class Library
{
private:
protected:
    //Lee los datos de la linea de un documento hardcodeado.
    virtual void read_data(int lineNumber) = 0;
public:
    //se debe colocar en un for que recorra la lista
    Library(int lineNumber);
    virtual ~Library();
    
    virtual int get_id() = 0;
    virtual string get_super_name()= 0;
    virtual string get_name()= 0;
    virtual string get_type()= 0;
    virtual string get_path()= 0;
    virtual void open_File()= 0;
};

#endif

