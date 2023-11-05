#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include "Item.h"
#include <vector>
#include <memory>
#include <iostream>

using namespace std;

class IOrder {
public:
    virtual void setCustomer(shared_ptr<ICustomer> customer) = 0;
    virtual void addItem(shared_ptr<IItem> _item) = 0;
    virtual void showItems() const = 0;
};

class Order : public IOrder {
private:
    shared_ptr<ICustomer> customer;
    vector<shared_ptr<IItem>> items;
public:
    void setCustomer(shared_ptr<ICustomer> _customer) override;
    void addItem(shared_ptr<IItem> _item) override;
    void showItems() const override;
};

#endif
