#include <iostream>
#include <vector>
using namespace std;


class Item
{
private:
    /* data */
public:
    Item(/* args */);
    ~Item();
};

class Customer {
private:
    string name;
    int id;
public:
    void setName(string name);
    string getName();
    void setId(int id);
    int getId();
};

class Ticket
{
private:
    /* data */
    vector<Item> items;
    float totalAmount;
public:
    Ticket(/* args */);
    ~Ticket();
    void addItem(Item item);
    void removeItem(Item item);
    float calculateTotalAmount();
    string generateInvoice();
};
