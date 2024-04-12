#include <iostream>

//Napisz program, który wczyta 5 liczb a nastêpnie wyœwietli je w odwrotnej kolejnoœci.
void task1()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;
   
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << "Podaj " << (i + 1) << " liczbê\n";
        std::cin >> numbers[i];
    }

    for (int i = ARRAY_NUMBER_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
}