#ifndef Soundtrack_h
    #define Soundtrack_h

#include <Library.h>
//hereda de Library
class Soundtrack : public Library
{
private:
    string SoundtrackLibrary_Path;
    int id;
    string super_name;
    string name;
    string type;
    string media_Path;
protected:
    void read_data(int lineNumber);
public:
    Soundtrack(int lineNumber);
    ~Soundtrack();

    int get_id();
    string get_super_name();
    string get_name();
    string get_type();
    string get_path();
    void open_File();
};


#endif

