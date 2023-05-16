#include <Netflix.h>

Netflix::Netflix(Library* _library) : StreamingPlataforms(_library){
    library = _library;
}
Netflix::~Netflix() {}

void Netflix::show_dates(){
    cout << library->get_super_name() << endl;
    cout << library->get_name() << endl;
    cout << library->get_type() << endl;
}

bool Netflix::runContent(){
    isRun = !isRun;
    cout << "funcion en proceso";
    return isRun;
}

void Netflix::openMedia(){
    isRun = true;
    show_dates();
    library->open_File();
}