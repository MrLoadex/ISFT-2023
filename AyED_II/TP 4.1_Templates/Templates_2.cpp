/*
Se pide escribir una función menor que tome dos argumentos genéricos y use el operador < para devolver el menor de ellos como valor de retorno. La función debe ser capaz de dar este tipo de resultados:
menor(2, 3) == 2
menor(6.0, 4.0) == 4.0
A continuación:
*/
#include <iostream>


//Si solo defino un template no necesito realizar la conversion.
template <typename T1, typename T2>
T1 return_major(T1& a, T2& b) {
    if (a > b) {
        return a;
    } else {
        return static_cast<T1>(b);
    }
}



int main()
{
    float a;
    int b;
    int choice;

    do
    {
        std::cout << "ingrese el primer numero: ";
        std::cin >> a; 

        std::cout << "ingrese el segundo numero: ";
        std::cin >> b; 

        float resultado = return_major(a,b);

        std::cout << std::endl;
        std::cout << "El mayor es: " << resultado << std::endl;
        std::cout << "Presione 1 si desea continuae o 0 para salir" << std::endl;
        std::cin >> choice;
    } while (choice!= 0);

    return 0;
}

