#include <iostream>
using namespace std;

/* Place holder for thread synchronization mutex */
class Mutex
{   /* placeholder for code to create, use, and free a mutex */
};

/* Place holder for thread synchronization lock */
class Lock
{   public:
        Lock(Mutex& m) : mutex(m) { /* placeholder code to acquire the mutex */ }
        ~Lock() { /* placeholder code to release the mutex */ }
    private:
        Mutex& mutex;
};



class Lavadora
{
    private:
        /* Here will be the instance stored. */
        static Lavadora* instance;

        static Mutex mutex;

        /* Private constructor to prevent instancing. */
        Lavadora(string name_) : name(name_) {};

    public:
        /* Static access method. */
        string name;
        string estado();
        static Lavadora* getInstance(string name_);
};

//inicializo mutex
Mutex Lavadora::mutex;

Lavadora* Lavadora::getInstance(string name_)
{
    Lock lock(mutex);

    static Lavadora instancia(name_);

    return &instancia;
}

string Lavadora::estado(){
    return name;
}

int main()
{
    //new Lavadora(); // Won't work
    Lavadora* lavadora1 = Lavadora::getInstance("Juan"); // Ok
    Lavadora* lavadora2 = Lavadora::getInstance("Oscar"); //No se puede pasar porque ya hay una instancia


    /* The addresses will be the same. */
    std::cout << "Lavadora ocupada por " << lavadora1->estado() << std::endl;
    std::cout <<  "Lavadora ocupada por " << lavadora2->estado() << std::endl;
}