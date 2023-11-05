#include "Order.h"
#include <iostream>

Order::Order(std::shared_ptr<ICustomer> _customer) : customer(_customer) {}

void Order::addItem(std::shared_ptr<IItem> _item) {
    items.push_back(_item);
}

void Order::showItems() const {
    std::cout << "Cliente: " << customer->getName() << " (ID: " << customer->getId() << ")\n";
    std::cout << "Items en la orden:\n";
    for (const auto& item : items) {
        std::cout << "  - " << item->getName() << " (ID: " << item->getId() << ", Price: $" << item->getPrice() << ")\n";
    }
}
