#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <memory>

class IItem {
public:
    virtual int getId() const = 0;
    virtual void setId(int id) = 0;
    virtual std::string getName() const = 0;
    virtual void setName(std::string name) = 0;
    virtual double getPrice() const = 0;
    virtual void setPrice(double price) = 0;
};

class Item : public IItem {
private:
    int id;
    std::string name;
    double price;

public:
    Item(int id, std::string name, double price);
    int getId() const override;
    void setId(int id) override;
    std::string getName() const override;
    void setName(std::string name) override;
    double getPrice() const override;
    void setPrice(double price) override;
};

#endif
