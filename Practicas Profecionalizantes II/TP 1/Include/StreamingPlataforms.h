#ifndef StreamingPlataforms_h
    #define StreamingPlataforms_h
#include <iostream>
#include <Library.h>
using namespace std;
class StreamingPlataforms
{
private:
public:
    StreamingPlataforms(Library* _library);
    virtual ~StreamingPlataforms() = 0;
    virtual void show_dates() = 0;
    virtual bool runContent() = 0;
    virtual void openMedia() = 0;

};
#endif