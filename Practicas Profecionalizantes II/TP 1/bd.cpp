//includes
#include <iostream>
#include <string>
#include <iostream>
#include <Library.h>
#include <Film.h>
#include <Soundtrack.h>
#include <StreamingPlataforms.h>
#include <Netflix.h>
#include <Spotify.h>
using namespace std;

//declaraciones:

//menu donde selecciona si quiere abrir netflix o spotify y devuelve
//1 = spotyfy  ; 2= netflix
int menu_Spoty_Netfl();

int main()
{
    Library* library = new Film(1);
    StreamingPlataforms* plataforma1 = new Netflix(library);
    plataforma1->show_dates();
    plataforma1->openMedia();
    cout << "name: " << library->get_name();
    //lista de reproduccion disponible
        //con sublistas quizas
    //selecciona un film o sound y se reproduce
    return 0;
}

int menu_Spoty_Netfl()
{
    int selection;
    cout << "Desea ingresar a Spotify o Netflix?" 
    << endl
    << "1) Spotify" << endl
    << "2) Netflix" << endl;
    cin >> selection;
    return selection;
}


