#include "Customer.h"

Customer::Customer(int _id, std::string _name) : id(_id), name(_name) {}

int Customer::getId() const {
    return id;
}

void Customer::setId(int _id) {
    id = _id;
}

std::string Customer::getName() const {
    return name;
}

void Customer::setName(std::string _name) {
    name = _name;
}
