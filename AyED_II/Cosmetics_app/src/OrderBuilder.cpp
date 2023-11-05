#include "OrderBuilder.h"

OrderBuilder::OrderBuilder()
{
    order = make_shared<Order>();
}

//crear de un item
auto OrderBuilder::buildItem()
{
    int id;
    string itemName;
    double price;
    cout << "Bienvenido a la creacion del articulo!" << endl;
    cout << "ID del articulo: ";
    cin >> id;

    cout << "Nombre del articulo: ";
    cin.ignore();
    getline(cin, itemName);

    cout << "Precio del precio: ";
    cin >> price;

    auto item= make_shared<Item>(id, itemName, price);
    return item;
}

//crear de un cliente
void OrderBuilder::buildCustomer()
{
    shared_ptr<ICustomer> customer;
    int id;
    string name;
    cout << "Bienvenido a la creacion del cliente" << endl;
    cout << "ID del cliente: ";
    cin >> id;

    cout << "Nombre del cliente: ";
    cin.ignore();
    getline(cin, name);

    customer = make_shared<Customer>(id, name);

    order->setCustomer(customer);
}

//crear un vector de items
void OrderBuilder::buildItems()
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
shared_ptr<IOrder> OrderBuilder::getOrder()
{
    return order;
}