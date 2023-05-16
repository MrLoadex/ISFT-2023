#include <Spotify.h>

Spotify::Spotify(Library* _library) : StreamingPlataforms(_library){
    library = _library;
}
Spotify::~Spotify() {}

void Spotify::show_dates(){
    cout << library->get_super_name() << endl;
    cout << library->get_name() << endl;
    cout << library->get_type() << endl;
}

bool Spotify::runContent(){
    isRun = !isRun;
    cout << "funcion en proceso";
    return isRun;
}

void Spotify::openMedia(){
    isRun = true;
    show_dates();
    library->open_File();
}