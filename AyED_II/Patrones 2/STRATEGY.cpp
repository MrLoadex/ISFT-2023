#include <iostream>

// Clase abstracta Strategy
class Strategy {
public:
    virtual void executeAlgorithm() = 0;
};

// Clase Coche que hereda de Strategy
class Coche : public Strategy {
public:
    void executeAlgorithm() override {
        std::cout << "Algoritmo para Coche ejecutado" << std::endl;
    }
};

// Clase Peaton que hereda de Strategy
class Peaton : public Strategy {
public:
    void executeAlgorithm() override {
        std::cout << "Algoritmo para Peaton ejecutado" << std::endl;
    }
};

// Clase TransportePublico que hereda de Strategy
class TransportePublico : public Strategy {
public:
    void executeAlgorithm() override {
        std::cout << "Algoritmo para Transporte Publico ejecutado" << std::endl;
    }
};

// Clase Navegator que utiliza la estrategia
class Navegator {
private:
    Strategy* currentStrategy;

public:
    Navegator() : currentStrategy(nullptr) {}

    void setStrategy(Strategy* strategy) {
        if (currentStrategy) {
            delete currentStrategy;
        }
        currentStrategy = strategy;
    }

    void executeAlgorithm() {
        if (currentStrategy) {
            currentStrategy->executeAlgorithm();
        } else {
            std::cout << "No se ha establecido una estrategia" << std::endl;
        }
    }

    Strategy* getStrategy() {
        return currentStrategy;
    }
};

int main() {
    short int option;
    Navegator navigator;
    Strategy* currentStrategy;

    std::cout << "Seleccione su metodo de transporte:" << std::endl <<
    "1) Coche" << std::endl <<
    "2) Peaton" << std::endl <<
    "3) Transporte Publico" << std::endl;
    std::cin >> option;

    if (option == 1){
        currentStrategy = new Coche;
        navigator.setStrategy(currentStrategy);
        navigator.executeAlgorithm();
    }
    else if (option == 2){
        currentStrategy = new Peaton;
        navigator.setStrategy(currentStrategy);
        navigator.executeAlgorithm();
    }
    else if (option == 3){
        currentStrategy = new TransportePublico;
        navigator.setStrategy(currentStrategy);
        navigator.executeAlgorithm();
    }
    else{
        std::cout << "Opción incorrecta" << std::endl;
    }

    delete currentStrategy;

    return 0;
}
