#include "OrderBuilder.h"
//crear de un cliente
void OrderBuilder::buildCustomer()
{
    int id;
    string name;
    cout << "Bienvenido a la creacion del cliente" << endl;
    cout << "ID del cliente: ";
    cin >> id;

    cout << "Nombre del cliente: ";
    cin >> name;

    customer = make_shared<Customer>(id, name);
}

//crear de un item
auto OrderBuilder::buildItem()
{
    int id;
    string name;
    double price;
    cout << "Bienvenido a la creacion del articulo!" << endl;
    cout << "ID del articulo: ";
    cin >> id;

    cout << "Nombre del articulo: ";
    cin >> name;

    cout << "Precio del precio: ";
    cin >> price;

    auto item= make_shared<Item>(id, name, price);
    return item;
}

//crear un vector de items
void OrderBuilder::buildItemsList()
{
    short int option = 1;    
    //llenar la lista de items
    do
    {
        //crea el item y lo agrega a la orden
        auto item = buildItem();
        order->addItem(item);

        //Confirmacion para el usuario y consulta para agregar mas items
        cout << item->getName() <<" agregado!" << endl;
        cout << "Ingrese 0 para salir o 1 para agregar mas items" << endl;
        cin >> option;

    }while (option!= 0);
}

//crear una orden
auto OrderBuilder::getOrder()
{
    return order;
}