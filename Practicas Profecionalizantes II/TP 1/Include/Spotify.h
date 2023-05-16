#ifndef Spotify_h
    #define Spotify_h

#include <StreamingPlataforms.h>
//hereda de StreamingPlataforms
class Spotify : public StreamingPlataforms
{
private:
    bool isRun = false;
    Library* library;
public:
    Spotify(Library* _library);
    ~Spotify();
    void show_dates();
    bool runContent();
    void openMedia();

};

#endif

