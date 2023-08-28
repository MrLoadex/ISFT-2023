#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Clase abstracta HotelRoom
class HotelRoom {
public:
    virtual int getPrice() const = 0;
    virtual string getServices() const = 0;
};

// Clase concreta BasicHotelRoom
class BasicHotelRoom : public HotelRoom {
public:
    int getPrice() const override {
        return 10;
    }

    string getServices() const override {
        return "Una cama";
    }
};

// Clase DecoratorHotelRoom
class DecoratorHotelRoom : public HotelRoom {
protected:
    HotelRoom *wrappedRoom;

public:
    DecoratorHotelRoom(HotelRoom *room) : wrappedRoom(room) {}

    int getPrice() const override {
        return wrappedRoom->getPrice();
    }

    string getServices() const override {
        return wrappedRoom->getServices();
    }
};

// Clase DoubleBedHotel
class DoubleBedHotel : public DecoratorHotelRoom {
public:
    DoubleBedHotel(HotelRoom *room) : DecoratorHotelRoom(room) {}

    int getPrice() const override {
        return wrappedRoom->getPrice() + 3;
    }

    string getServices() const override {
        return wrappedRoom->getServices() + ", con otra cama";
    }
};

// Clase WifiHotel
class WifiHotel : public DecoratorHotelRoom {
public:
    WifiHotel(HotelRoom *room) : DecoratorHotelRoom(room) {}

    int getPrice() const override {
        return wrappedRoom->getPrice() + 1;
    }

    string getServices() const override {
        return wrappedRoom->getServices() + ", con wifi";
    }
};

// Clase PoolHotel
class PoolHotel : public DecoratorHotelRoom {
public:
    PoolHotel(HotelRoom *room) : DecoratorHotelRoom(room) {}

    int getPrice() const override {
        return wrappedRoom->getPrice() + 2;
    }

    string getServices() const override {
        return wrappedRoom->getServices() + ", con pileta";
    }
};

// Función para mostrar el menú de servicios
void showServicesMenu() {
    cout << "Seleccione un servicio para agregar:" << endl;
    cout << "1. Cama Doble" << endl;
    cout << "2. Wifi" << endl;
    cout << "3. Piscina" << endl;
    cout << "4. Finalizar y mostrar habitación" << endl;
}

int main() {
    HotelRoom* selectedRoom = new BasicHotelRoom();
    vector<int> selectedServices;

    while (true) {
        showServicesMenu();
        
        int choice;
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            if (find(selectedServices.begin(), selectedServices.end(), choice) == selectedServices.end()) {
                selectedServices.push_back(choice);
                switch (choice) {
                    case 1:
                        selectedRoom = new DoubleBedHotel(selectedRoom);
                        break;
                    case 2:
                        selectedRoom = new WifiHotel(selectedRoom);
                        break;
                    case 3:
                        selectedRoom = new PoolHotel(selectedRoom);
                        break;
                }
            } else {
                cout << "¡Ya has seleccionado este servicio!" << endl;
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Opción no válida." << endl;
        }
    }

    cout << "Habitación final:" << endl;
    cout << "Precio: " << selectedRoom->getPrice() << endl;
    cout << "Servicios: " << selectedRoom->getServices() << endl;

    delete selectedRoom;

    return 0;
}