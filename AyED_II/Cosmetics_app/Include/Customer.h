#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <memory>

class ICustomer {
public:
    virtual int getId() const = 0;
    virtual void setId(int id) = 0;
    virtual std::string getName() const = 0;
    virtual void setName(std::string name) = 0;
};

class Customer : public ICustomer {
private:
    int id;
    std::string name;

public:
    Customer(int id, std::string name);
    int getId() const override;
    void setId(int id) override;
    std::string getName() const override;
    void setName(std::string name) override;
};

#endif