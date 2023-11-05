#include "Customer.h"
#include "Item.h"
#include "Order.h"
#include "OrderBuilder.h"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main() {
    auto orderBuilder = make_shared<OrderBuilder>();

    cout<< "Bienvenido al carrito de cosmeticos" << endl;
    
    // Crear el cliente
    orderBuilder->buildCustomer();

    // Crear articulos
    orderBuilder->buildItems();

    // Obtener el pedido
    auto order = orderBuilder->getOrder();

    // Mostrar el pedido
    order->showItems();

    return 0;
}