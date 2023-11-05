#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>
#include <string>
#include <memory>
#include "Customer.h"
#include "Item.h"
#include "Order.h"

using namespace std;

class OrderBuilder {
private:
    shared_ptr<IOrder> order;
    shared_ptr<ICustomer> customer;
    auto buildItem();//crear de un item
public:
    //crear de un cliente
    void buildCustomer();
    //crear un vector de items
    void buildItemsList();
    //devolver el pedido
    auto getOrder();
};

#endif
