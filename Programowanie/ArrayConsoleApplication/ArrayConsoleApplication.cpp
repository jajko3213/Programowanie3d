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

//Program, który wype³ni tablice (100 elementow¹) liczbami od 1 do 99, a nastêpnie obliczy sumê oraz œredni¹ liczb parzystych.
void task2()
{
    const unsigned short ARRAY_NUMBER_SIZE = 100;
    

    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = i;
        std::cout << numbers[i] << " ,";
    }

    std::cout << "\n";
    
    int sum = 0, counter = 0;
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            sum = sum + numbers[i];
            counter++;
        }
        
    }
    
    std::cout << "\n";

    std::cout << "Suma liczb parzystych tablicy wynosi: " << sum << "\n";
    
    int arithmeticMeanOfEvenNumbers = sum / counter;

    std::cout << "Œrednia arytmetyczna tych liczb wynosi: " << arithmeticMeanOfEvenNumbers;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}