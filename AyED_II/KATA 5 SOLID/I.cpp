class Printer {
public:
    virtual void print() = 0;
};

class BasePrinter : Printer {
public:
    void print();
};

class printPDF : Printer {
private:
    Printer* printer = new BasePrinter;
public:
    void print();
};
class printHTML : Printer {
private:
    Printer* printer = new BasePrinter;
public:
    void print()
    {   //Ejemplo
        return printer->print();
    };

};
class printPlainText : Printer {
private:
    BasePrinter* printer = new BasePrinter;
public:
    void print();
};