#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>
#include <string>
#include <memory>
#include "Customer.h"
#include "Item.h"
#include "Order.h"

using namespace std;

class IOrderBuilder
{
public:
        //crear de un cliente
    virtual void buildCustomer() = 0;
    //crear un vector de items
    virtual void buildItems() = 0;
    //devolver el pedido
    virtual shared_ptr<IOrder> getOrder() = 0;
};



class OrderBuilder : public IOrderBuilder{
private:
    shared_ptr<IOrder> order;
    auto buildItem();//crear de un item
public:
    //crear de un cliente
    void buildCustomer() override;
    //crear un vector de items
    void buildItems() override;
    //devolver el pedido
    shared_ptr<IOrder> getOrder() override;
};

#endif
