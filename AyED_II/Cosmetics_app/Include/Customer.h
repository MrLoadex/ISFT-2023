#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <memory>

using namespace std;

class ICustomer {
public:
    virtual int getId() const = 0;
    virtual void setId(int id) = 0;
    virtual string getName() const = 0;
    virtual void setName(string name) = 0;
};

class Customer : public ICustomer {
private:
    int id;
    string name;

public:
    Customer(int id, string name);
    int getId() const override;
    void setId(int id) override;
    string getName() const override;
    void setName(string name) override;
};

#endif