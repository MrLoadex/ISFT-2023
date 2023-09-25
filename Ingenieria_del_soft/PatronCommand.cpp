#include <iostream>
#include <map>
#include <functional>

class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() {}
};

class Option1 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 1 seleccionada" << std::endl;
    }
};

class Option2 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 2 seleccionada" << std::endl;
    }
};

class Option3 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 3 seleccionada" << std::endl;
    }
};

class Option4 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 4 seleccionada" << std::endl;
    }
};

class Option5 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 5 seleccionada" << std::endl;
    }
};

class Option6 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 6 seleccionada" << std::endl;
    }
};

class Option7 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 7 seleccionada" << std::endl;
    }
};

class Option8 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 8 seleccionada" << std::endl;
    }
};

class Option9 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 9 seleccionada" << std::endl;
    }
};

class Option10 : public Command {
public:
    void execute() override {
        std::cout << "Opcion 10 seleccionada" << std::endl;
    }
};

int main() {
    std::map<int, std::function<Command*()>> commandFactory;
    
    // Agrega nuevas opciones al menú aquí
    commandFactory[1] = []() { return new Option1(); };
    commandFactory[2] = []() { return new Option2(); };
    commandFactory[3] = []() { return new Option3(); };
    commandFactory[4] = []() { return new Option4(); };
    commandFactory[5] = []() { return new Option5(); };
    commandFactory[6] = []() { return new Option6(); };
    commandFactory[7] = []() { return new Option7(); };
    commandFactory[8] = []() { return new Option8(); };
    commandFactory[9] = []() { return new Option9(); };
    commandFactory[10] = []() { return new Option10(); };

    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Opcion 1" << std::endl;
        std::cout << "2. Opcion 2" << std::endl;
        std::cout << "3. Opcion 3" << std::endl;
        std::cout << "4. Opcion 4" << std::endl;
        std::cout << "5. Opcion 5" << std::endl;
        std::cout << "6. Opcion 6" << std::endl;
        std::cout << "7. Opcion 7" << std::endl;
        std::cout << "8. Opcion 8" << std::endl;
        std::cout << "9. Opcion 9" << std::endl;
        std::cout << "10. Opcion 10" << std::endl;
        std::cout << "0. Salir" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 0) {
            break;
        }

        if (commandFactory.find(choice) != commandFactory.end()) {
            Command* command = commandFactory[choice]();
            command->execute();
            delete command;
        } else {
            std::cout << "Opcion inválida" << std::endl;
        }
        std::cin.ignore();
    }

    return 0;
}
