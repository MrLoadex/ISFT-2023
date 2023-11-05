#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include "Item.h"
#include <vector>
#include <memory>

class IOrder {
public:
    virtual void addItem(std::shared_ptr<IItem> _item) = 0;
    virtual void showItems() const = 0;
};

class Order : public IOrder {
private:
    std::shared_ptr<ICustomer> customer;
    std::vector<std::shared_ptr<IItem>> items;

public:
    Order(std::shared_ptr<ICustomer> _customer);
    void addItem(std::shared_ptr<IItem> _item) override;
    void showItems() const override;
};

#endif
