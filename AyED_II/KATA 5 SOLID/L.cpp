#include <iostream>
using namespace std;


class Bird {
public:
    virtual void Move() = 0;
};


class Eagle : public Bird {
public:
    void Move() override;
};
class Penguin : public Bird {
public:
    void Move() override;
};
class Ostrich : public Bird {
public:
    void Move() override;
};