#include <iostream>

//Napisz program, którypobierze liczbê od u¿ytkownika i wyœwietli czy jest ona dodatnia czy nie.
void task1()
{
    int number;
    std::cout << "Podaj liczbe, ktorom chcesz sprawdzic: ";  "\n";
    std::cin >> number;
    
    //wersja 1
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }
    else 
    {
        std::cout << "Liczba jest ujemna\n";
    }
    
    //wersja 2
    /*if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }

    if (number <= 0)
    {
        std::cout << "Liczba jest ujemna\n";
    }
    */
}

void task2()
{
    int firstNumber, secondNumber, thirdNumber, fourthNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> thirdNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> fourthNumber;

    if (fourthNumber > firstNumber && fourthNumber > secondNumber && fourthNumber > thirdNumber)
    {
    std::cout << "Najwiêksza wartoœæ to " << fourthNumber << "\n";
    }
    else
    {
        if (thirdNumber > firstNumber && thirdNumber > secondNumber)
            std::cout << "Najwiêksza wartoœæ to " << thirdNumber << "\n";
        else
        {
            if (secondNumber > firstNumber)
                std::cout << "Najwiêksza wartoœæ to " << secondNumber << "\n";
            else
                std::cout << "Najwiêksza liczba to " << firstNumber << "\n";
        }
    }
}

void task3()
{
    
}

int main()
{
    //task1();
    //task2();
}

/*
Operatory porównania:
>   wiêkszoœci
<   mniejszoœci
>=  wiêksze lub równe
<=  mniejsze lub równe
== równoœæ
!= rózñoœæ
*/


