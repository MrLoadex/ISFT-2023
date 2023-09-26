#include <iostream>


//1. Declarar una función que toma dos parámetros de plantilla distintos de los  cuales uno es el tipo de retorno y el otro es argumento.
template <typename T1, typename T2>
T1 return_a(T1& a, T2& b) {
    return a;
}


//2. Declarar una clase que toma un parámetro de plantilla, el cual es una variable miembro (atributo) de la misma.
template <typename T>
class OnlyTemplateTaker
{
private:
    T templateAtribute;
public:
    OnlyTemplateTaker(T a): templateAtribute(a) {};
    ~OnlyTemplateTaker() {};
    T returnParameter(){
        return templateAtribute;
    };
};


//3. Declarar una clase que toma dos parámetros de plantilla, uno como argumento al constructor y otro como tipo de retorno de una función miembro (método) sin argumentos.
template <typename T1, typename T2>
class TypeConverter {
public:
    TypeConverter(T1 valor) : valor_(valor) {}

    T2 obtenerValor() {
        return valor_;
    }

private:
    T1 valor_;
};


int main()
{
    //1.
    int a = 1;
    float b = 2.5;
    float resultado_1 = return_a(a,b);
    std::cout << "Punto 1, valor obtenido es: " << resultado_1 << std::endl;

    //2.
    OnlyTemplateTaker<float> vomitador(b);
    double resultado_2 = vomitador.returnParameter();
    std::cout << "Punto 2, valor obtenido es: " << resultado_2 << std::endl;

    //3.
    TypeConverter<int, double> instancia(a);
    double resultado_3 = instancia.obtenerValor();
    std::cout << "Punto 3, valor obtenido es: " << resultado_3 << std::endl;

    return 0;
}

