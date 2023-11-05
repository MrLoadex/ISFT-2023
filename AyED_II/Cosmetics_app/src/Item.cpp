#include "Item.h"

Item::Item(int _id, std::string _name, double _price) : id(_id), name(_name), price(_price) {}

int Item::getId() const {
    return id;
}

void Item::setId(int _id) {
    id = _id;
}

std::string Item::getName() const {
    return name;
}

void Item::setName(std::string _name) {
    name = _name;
}

double Item::getPrice() const {
    return price;
}

void Item::setPrice(double _price) {
    price = _price;
}
