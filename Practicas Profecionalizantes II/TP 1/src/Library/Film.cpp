#include <Film.h>
Film::Film(int lineNumber) : Library(lineNumber){
    filmLibrary_Path = "Include\\FilmLibrary.csv";
    read_data(lineNumber);
}
Film::~Film() {}

void Film::read_data(int lineNumber){
    ifstream file(filmLibrary_Path);  // Abre el archivo para lectura
    if (file.is_open()) {
        string line;
        int currentLine = 1;
        while (getline(file, line)) {
            if (currentLine == lineNumber) {
                stringstream ss(line);
                string value;
                int index = 0;
                while (getline(ss, value, ',')) {
                    if (index == 0) {
                        id = stoi(value);
                    } else if (index == 1) {
                        super_name = value;
                    } else if (index == 2) {
                        name = value;
                    } else if (index == 3) {
                        type = value;
                    } else if (index == 4) {
                        media_Path = value;
                    }
                    index++;
                }
                break;
            }
            currentLine++;
        }

        file.close();
    } else {
        cerr << "Error al abrir el archivo" << endl;
    }
}

int Film::get_id(){
    return id;
}

string Film::get_path(){
    return media_Path;
}
string Film::get_super_name(){
    return super_name;
}
string Film::get_name(){
    return name;
}
string Film::get_type(){
    return type;
}

void Film::open_File(){
    std::wstring path(media_Path.begin(), media_Path.end()); // Convertir la ruta del archivo de video a wstring

    // Reproducir el archivo de video utilizando el reproductor predeterminado de Windows
    int result = (int)ShellExecuteW(NULL, L"open", path.c_str(), NULL, NULL, SW_SHOW);
    
    // Verificar el resultado de la ejecución
    if (result <= 32) {
        // Ocurrió un error al intentar reproducir el video
        MessageBoxW(NULL, L"Error al reproducir el video", L"Error", MB_OK | MB_ICONERROR);
    }
}