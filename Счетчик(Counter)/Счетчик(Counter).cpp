#include <iostream>

using namespace std;

class Counter {
private:
    int value;

public:
    Counter() {
        value = 1;
    }

    Counter(int initialValue) {
        value = initialValue;
    }

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    int getValue() {
        return value;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");

    std::string choice;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> choice;

    Counter counter;

    if (choice == "yes") {
        int initialValue;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }

    while (true) {
        std::string command;
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == "+") {
            counter.increment();
        }
        else if (command == "-") {
            counter.decrement();
        }
        else if (command == "=") {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == "x") {
            break;
        }
        else {
            std::cout << "Некорректная команда!" << std::endl;
        }
    }

    std::cout << "До свидания!" << std::endl;

    return 0;
}