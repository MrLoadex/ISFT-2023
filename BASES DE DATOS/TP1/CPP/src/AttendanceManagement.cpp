#include <AttendanceManagement.hpp>
#include <fstream>
#include <sstream>

AttendanceManagement::AttendanceManagement(){}
AttendanceManagement::~AttendanceManagement(){}

void AttendanceManagement::TakeAttendance(Student _student, Course _course, string datetime, bool state)
{
    string linea; //Guardara linea por linea del archivo
    string contenido_archivo = ""; //Guardara la info actual del archivo + la info nueva.
    //Abrimos el archivo
    string nombre_archivo = "attendance.csv";
    ifstream archivo(nombre_archivo);

    //ver si existe el archivo
    if (archivo.is_open()) {
        cout << "El archivo existe." << endl;
        //copia el archivo en memoria
        while (!archivo.eof()) {
            getline(archivo, linea);
            contenido_archivo += linea + "\n";
        }
        archivo.close();
    } 
  
    else {
        // El archivo no existe o no se pudo abrir
        cout << "El archivo no existe. Fue creado" << endl;
        ofstream archivo(nombre_archivo);
        archivo.close();
    }
    linea = to_string(_student.getIdentifier()) + "," + _student.getName() + "," + _student.getSurname() + "," + to_string(_course.getIdentifier()) + "," + _course.getName(), "," +  datetime, "," + to_string(static_cast<int>(state));   
    contenido_archivo += linea;
    //guarda
    ofstream archivo1(nombre_archivo);
    archivo1 << contenido_archivo;
    archivo.close();
}

void AttendanceManagement::ShowAttendance()
{
    string contenido_archivo; //Guardara la info actual del archivo + la info nueva.
    string nombre_archivo = "attendance.csv";
    ifstream archivo(nombre_archivo);

    //comprobamos si existe el archivo
    if (archivo.is_open()) {
        cout << "El archivo existe." << endl;
        //imprime el contenido en pantalla
        while (!archivo.eof()) {
            string linea;
            getline(archivo, linea);
            cout << linea << endl;  
        }
        archivo.close();
    } 
  
    else {
        // El archivo no existe o no se pudo abrir
        cout << "El archivo no existe." << endl;
    }
}