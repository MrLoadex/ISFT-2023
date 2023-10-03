#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <unordered_map>
#include <sstream>
//include de animales
using namespace std;

void vectorPrint(vector<int>* int_Vector)
{
    // Utilizar un bucle basado en rangos para imprimir el contenido del vector
    for (int num : *int_Vector) {
        cout << num << " ";
    }
    cout << endl;    
}

void hacerEjercicio1(vector<int>* int_Vector)
{
    
    //Insertar dos elementos.
    int_Vector->push_back(1);
    int_Vector->push_back(2);

    //Imprimir
    vectorPrint(int_Vector);

    //Borre el segundo elemento del vector.
    int_Vector->pop_back();

    //Imprimir
    vectorPrint(int_Vector);

    //Insertar dos elementos para evitar error y poder borrar 3 elementos.
    int_Vector->push_back(3);
    int_Vector->push_back(4);

    //Borrar el rango de 3 elementos a partir del principio del vector.
    int_Vector->erase(int_Vector->begin(), int_Vector->begin() + 3);
    
    //Imprimir
    vectorPrint(int_Vector);
    
    //Insertar otros dos elementos para seguir trabajando
    int_Vector->push_back(1);
    int_Vector->push_back(2);

    //Valor a buscar
    int valor_a_buscar = 2;

    //Buscar un elemento vectorial utilizando la función de algoritmo find().
    auto it = find(int_Vector->begin(), int_Vector->end(), valor_a_buscar);

    //Verificar si encontro el valor
    if (it != int_Vector->end())
    {
        int_Vector->erase(it);
        cout << "Elemento eliminado" << endl;
    }
    
    //Imprimir el vector
    vectorPrint(int_Vector);
}


void hacerEjercicio3()
{
    // Crear un mapa vacío Map1
    map<int, string> Map1;

    // Insertar elementos en orden aleatorio en Map1
    Map1.insert(make_pair(3, "Tres"));
    Map1.insert(make_pair(1, "Uno"));
    Map1.insert(make_pair(4, "Cuatro"));
    Map1.insert(make_pair(2, "Dos"));

    // Imprimir Map1
    cout << "Map1:" << endl;
    for (const auto& pair : Map1) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Asignar elementos de Map1 a Map2
    map<int, string> Map2(Map1.begin(), Map1.end());

    // Imprimir Map2
    cout << "\nMap2 (copiado de Map1):" << endl;
    for (const auto& pair : Map2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Eliminar elementos en Map2 hasta clave = 3 (inclusive)
    map<int, string>::iterator it = Map2.begin();
    while (it != Map2.end()) {
        if (it->first <= 3) {
            it = Map2.erase(it);
        } else {
            ++it;
        }
    }

    // Imprimir Map2 después de eliminar
    cout << "\nMap2 despues de eliminar hasta clave = 3:" << endl;
    for (const auto& pair : Map2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Eliminar todos los elementos con clave = 4 en Map2
    Map2.erase(4);

    // Imprimir Map2 después de eliminar clave = 4
    cout << "\nMap2 despues de eliminar clave = 4:" << endl;
    for (const auto& pair : Map2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Crear un mapa Map1_clave5 con límite inferior y superior para clave = 5
    map<int, string> Map1_clave5(Map1.lower_bound(5), Map1.upper_bound(5));

    // Imprimir Map1_clave5
    cout << "\nMap1 con limite inferior y superior para clave = 5:" << endl;
    for (const auto& pair : Map1_clave5) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Crear un unordered_map para contar palabras en la frase
    unordered_map<string, int> wordCount;
    string frase = "Existen dos tipos de lenguajes de programacion: por un lado, aquellos de los que la gente se queja todo el rato; por otro, los que nadie utiliza.";

    // Tokenizar la frase en palabras
    vector<string> words;
    istringstream iss(frase);
    string word;
    //Formateamos la frase
    while (iss >> word) {
        // Convertir la palabra a minúsculas para que no sea sensible a mayúsculas y minúsculas
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Incrementar el contador de la palabra en el unordered_map
        wordCount[word]++;
    }

    // Imprimir el recuento de palabras
    cout << "\nConteo de palabras en la frase:" << endl;
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }
}


int main()
{
    //Crear el vector
    vector<int>* int_Vector = new vector<int>;

    //Hacer el ejercicio 1
    cout << "ejercicio 1." << endl;
    hacerEjercicio1(int_Vector);

    //Ejercicio 2
    cout << "ejercicio 2." << endl;
    for (vector<int>::iterator it = int_Vector->begin(); it != int_Vector->end(); ++it)
    {
        cout << *it << " ";
    }

    //Ejercicio 3
    cout << "ejercicio 3." << endl;
    hacerEjercicio3();
}