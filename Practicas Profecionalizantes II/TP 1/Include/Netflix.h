#ifndef Netflix_h
    #define Netflix_h

#include <StreamingPlataforms.h>
//hereda de StreamingPlataforms
class Netflix : public StreamingPlataforms
{
private:
    bool isRun = false;
    Library* library;
public:
    Netflix(Library* _library);
    ~Netflix();
    void show_dates();
    bool runContent();
    void openMedia();

};

#endif

