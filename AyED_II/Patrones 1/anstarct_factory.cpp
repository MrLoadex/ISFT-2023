#include <iostream>
#include <string>
using namespace std;

//=================================================================== DECLARACION MUEBLES ABSTRACTOS

class CoffeeTable {
public:
    virtual void Use() = 0;
    virtual ~CoffeeTable() {}
};

class Chair {
public:
    virtual void SitOn() = 0;
    virtual ~Chair() {}
};

class Sofa {
public:
    virtual void Use() = 0;
    virtual ~Sofa() {}
};

//=================================================================== DECLARACION MUEBLES CONCRETOS

class ModernCoffeeTable : public CoffeeTable {
public:
    void Use() override;
};

class VictorianCoffeeTable : public CoffeeTable {
public:
    void Use() override;
};

class ModernChair : public Chair {
public:
    void SitOn() override;
};

class VictorianChair : public Chair {
public:
    void SitOn() override;
};

class ModernSofa : public Sofa {
public:
    void Use() override;
};

class VictorianSofa : public Sofa {
public:
    void Use() override;
};

//=================================================================== DECLARACION FABRICAS

class FurnitureFactory {
public:
    virtual CoffeeTable* createCoffeeTable() = 0;
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
    virtual ~FurnitureFactory() {};

};

class VictorianFurnitureFactory : public FurnitureFactory {
public:
    CoffeeTable* createCoffeeTable() override;
    Chair* createChair() override;
    Sofa* createSofa() override;
    VictorianFurnitureFactory() {};
    ~VictorianFurnitureFactory() {};
};

class ModernFurnitureFactory : public FurnitureFactory {
public:
    CoffeeTable* createCoffeeTable() override;
    Chair* createChair() override;
    Sofa* createSofa() override;
    ModernFurnitureFactory() {};
    ~ModernFurnitureFactory() {};
};

//=================================================================== IMPLEMENTACION MUEBLES

void ModernCoffeeTable::Use() {
    cout << "Using the modern coffee table." << endl;
}

void VictorianCoffeeTable::Use() {
    cout << "Using the Victorian coffee table." << endl;
}

void ModernChair::SitOn() {
    cout << "Sitting on a modern chair." << endl;
}

void VictorianChair::SitOn() {
    cout << "Sitting on a Victorian chair." << endl;
}

void ModernSofa::Use() {
    cout << "Using the modern sofa." << endl;
}

void VictorianSofa::Use() {
    cout << "Using the Victorian sofa." << endl;
}

//=================================================================== IMPLEMENTACION FABRICA VICTORIANA

CoffeeTable* VictorianFurnitureFactory::createCoffeeTable() {
    return new VictorianCoffeeTable;
}

Chair* VictorianFurnitureFactory::createChair() {
    return new VictorianChair;
}
Sofa* VictorianFurnitureFactory::createSofa() {
    return new VictorianSofa;
}

//=================================================================== IMPLEMENTACION FABRICA MODERNA

CoffeeTable* ModernFurnitureFactory::createCoffeeTable() {
    return new ModernCoffeeTable;
}

Chair* ModernFurnitureFactory::createChair() {
    return new ModernChair;
}
Sofa* ModernFurnitureFactory::createSofa() {
    return new ModernSofa;
}



int main() {

    Chair* chair;
    CoffeeTable* coffeeTable;
    Sofa* sofa;
    FurnitureFactory* furnitureFactory;
    int styleOption;
    int exitOption;

    //Bucle del menu
    do{

        //Ingresar el estilo
        cout << "Escriba el numero dependiendo del estilo de mueble que desee\n"
        << "1) Modern\n"
        << "2) Victorian\n";
        cin >> styleOption;

        //Seleccionar el estilo
        if (styleOption == 1)
        {
            furnitureFactory = new ModernFurnitureFactory;
        }
        else if (styleOption == 2)
        {
            furnitureFactory = new VictorianFurnitureFactory;
        }
        
        chair = furnitureFactory->createChair();
        chair->SitOn();
        
        coffeeTable = furnitureFactory->createCoffeeTable();
        coffeeTable->Use();
        
        sofa = furnitureFactory->createSofa();
        sofa->Use();
        
        cout << "Seleccione 0 para salir, 1 para continuar";
        cin >> exitOption;
    } while (exitOption);
    
}