#include <iostream>
#include <vector>
using namespace std;

class Database {
public:
    virtual void save() = 0;
    virtual void addUser() = 0;
};


class MySQL : Database {
public:
    void save();
    void addUser();
};