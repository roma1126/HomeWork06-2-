#include<iostream>
#include <cstring>
#include "counter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    std::string check_value;
    int value = 0;
    bool checkTrueValue = false;


    do
    {
        std::cout << std::endl << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> check_value;
        std::cout << std::endl;

        if (check_value == "да")
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> value;
            checkTrueValue = true;
        }
        else if (check_value == "нет")
        {
            checkTrueValue = true;
        }
        else
        {
            std::cout << "Вы ввели неверную команду.";
        }
    } while (!checkTrueValue);

    Counter Counter(value);

    std::cout << std::endl;

    std::string CounterValue;
    bool checkCounter = false;

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> CounterValue;

        if (CounterValue == "x")
        {
            std::cout << "Пока.";
            checkCounter = true;
        }
        else if (CounterValue == "+")
        {
            Counter.plusCounter();
        }
        else if (CounterValue == "-")
        {
            Counter.minusCounter();
        }
        else if (CounterValue == "=")
        {
            std::cout << "Значение счетчика: " << Counter.currentCounter() << "." << std::endl;
        }
        else
        {
            std::cout << "Вы ввели неверную команду." << std::endl;
        }
    } while (!checkCounter);
}


