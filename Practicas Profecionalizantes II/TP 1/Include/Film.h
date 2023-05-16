#ifndef Film_h
    #define Film_h

#include <Library.h>
//hereda de Library
class Film : public Library
{
private:
    string filmLibrary_Path;
    int id;
    string super_name;
    string name;
    string type;
    string media_Path;
protected:
    void read_data(int lineNumber);
public:
    Film(int lineNumber);
    ~Film();

    int get_id();
    string get_super_name();
    string get_name();
    string get_type();
    string get_path();
    void open_File();
};


#endif

