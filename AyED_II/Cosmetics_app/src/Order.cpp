#include "Order.h"

void Order::addItem(shared_ptr<IItem> _item) {
    items.push_back(_item);
}

void Order::showItems() const {
    cout << "Cliente: " << customer->getName() << " (ID: " << customer->getId() << ")\n";
    cout << "Items en la orden:\n";
    for (const auto& item : items) {
        cout << "  - " << item->getName() << " (ID: " << item->getId() << ", Price: $" << item->getPrice() << ")\n";
    }
}

void Order::setCustomer(shared_ptr<ICustomer> _customer)
{
    customer = _customer;
}