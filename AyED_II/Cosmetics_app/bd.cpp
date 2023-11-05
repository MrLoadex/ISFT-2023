#include "Customer.h"
#include "Item.h"
#include "Order.h"
#include "OrderBuilder.h"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;



int main() {
    shared_ptr<OrderBuilder> builder;

    cout<< "Bienvenido al carrito de cosmeticos" << endl;
    
    // Crear el cliente
    builder->buildCustomer();

    // Crear elementos y llenar el vector de elementos
    builder->buildItemsList();

    // Crear la orden
    auto order = builder->getOrder();

    // Mostrar la orden
    order->showItems();

    return 0;
}