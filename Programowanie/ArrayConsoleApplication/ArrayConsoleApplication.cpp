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

//Napisz program który przyjmie od u¿ytkownika listê ocen z pewnego przedmiotu i obliczy ich œredni¹ arytmetyczn¹.
/*Funkcje programu :

*Poproœ u¿ytkownika o wprowadzenie ka¿dej oceny.
*Zapisz oceny w tablicy.
*Oblicz œredni¹ arytmetyczn¹ ocen.
*Wyœwietl œredni¹ ocen na ekranie.
*/

void task3()
{
    std::cout << "Podaj swoje oceny z jednego dowolnego przedmiotu szkolnego, mo¿esz podaæ maksymalnie 10 ocen\n";
    std::cout << "Napisz z jakiego przedmiotu obliczasz œredni¹. Napisz to w sposób np. historii, biologi, chemi, angielskiego itd.\n";
    std::string subjectFromUser;
    std::cin >> subjectFromUser;

    const unsigned int ARRAY_NUMBERS_SIZE = 10;
    int grades[ARRAY_NUMBERS_SIZE];
    int sum = 0, counter = 0;

    for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++) {
        bool grade = false;
        while (grade == false) 
        {
            std::cout << "Podaj swoj¹ " << (i + 1) << " ocenê: ";
            std::cin >> grades[i];
            if (grades[i] >= 1 && grades[i] <= 6) 
            {
                grade = true;
                std::cout << "\n";
                sum = sum + grades[i];
                counter++;
            }
            else 
            {
                std::cout << "Podana ocena jest w z³ej skali. Podaj ocenê z zakresu od 1 do 6.\n";
         
            }
        }
    }

    int arithmeticAverage = sum / counter;
    std::cout << "Twoja œrednia ocen z " + subjectFromUser <<  " wynosi: " << arithmeticAverage << "\n";
}

void task4()
{
    std::string text[7] = { "Poniedzia³ek", "Wtorek", "Œroda", "Czwartek", "Pi¹tek", "Sobota", "Niedziela"};
    std::string textFromUser;
    std::cin >> textFromUser;
    if (textFromUser == text[1])
    {
        std::cout << "Prawid³owo\n";
    }
    else
    {
        std::cout << "Nieprawid³owo\n";
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task4();
}