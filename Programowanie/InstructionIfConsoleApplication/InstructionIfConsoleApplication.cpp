#include <iostream>
//
/*

Priorytety operatorów:

* /
+ -
> < >= <= == !=
&&
||
=

Operatory porównania:
>   wiêkszoœci
<   mniejszoœci
>=  wieksze b¹dŸ równe
<=  mniesze b¹dŸ równe
==  równe
!=  ró¿ne

Operatory logiczne:

||  or/lub
&&  and/i
!   not/nie


 A  B   A || B      A && B      !A
 f  f      f           f         t
 f  t      t           f
 t  f      t           f         f
 t  t      t           t


*/

/*
* 
* 
* 
* 
* Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
* Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
* Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
* Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie oceny w skali 100-punktowej i przeliczy j¹ na ocenê procentow¹ w przedziale od 0 do 100. Wyœwietl wynik.
* Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Napisz program, który na podstawie wspó³czynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak, to je obliczy.
* Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
*/


//Napisz program, który pobierze liczbê od u¿ytkownika i wyœwietli czy jest ona dodatnia czy nie.
void task1()
{
    int number;
    std::cout << "Podaj liczbê \n";
    std::cin >> number;

    //wersja 1
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }

    if (number <= 0)
    {
        std::cout << "Liczba jest ujemna\n";
    }

    //wersja 2
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }
    else
    {
        std::cout << "Liczba jest ujemna\n";
    }

    
}

//Napisz program, który wczyta liczbê
//i sprawdzi czy jest ona z zakresu <1;10).
void task2()
{
    int number;
    std::cout << "Podaj liczbê \n";
    std::cin >> number;

    //wersja 1
    if (number >= 1)
    {
        if (number < 10)
        {
            std::cout << "Liczba jest w zakresie\n";
        }
        else
        {
            std::cout << "Liczba nie jest w zakresie\n";
        }
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }

    //wersja 2
    if (number >= 1 && number < 10)
    {
        std::cout << "Liczba jest w zakresie\n";
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }
}

void task3()
{
    int firstNumber, secondNumber, thirdNumber, fourthNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> thirdNumber;
    std::cout << "Podaj liczbe\n";
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

//Napisz program, który wczyta jedn¹ liczbê i wyœwietli j¹ w kolejnoœci rosn¹cej.
void task4()
{
    int firstNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> firstNumber;

    std::cout << "Liczby w kolejnoœci rosn¹cej:\n";
    std::cout << firstNumber;
    std::cout << "\n";
}


//Napisz program, który wczyta dwie liczby i wyœwietli je w kolejnoœci rosn¹cej.
void task5()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> secondNumber;

    std::cout << "Liczby w kolejnoœci rosn¹cej:\n";
    if (firstNumber > secondNumber)
        std::cout << secondNumber << "," << firstNumber;
    else
        std::cout << firstNumber << "," << secondNumber;
}

//Napisz program, który wczyta trzy liczby i wyœwietli je w kolejnoœci rosn¹cej.
void task6()
{
    int firstNumber, secondNumber, thirdNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczbê\n";
    std::cin >> thirdNumber;

    std::cout << "Liczby w kolejnoœci rosn¹cej:\n";
    if (thirdNumber < firstNumber
        && thirdNumber < secondNumber)
    {
        std::cout << thirdNumber << ", ";
        if (secondNumber < firstNumber)
            std::cout << secondNumber << ", " << firstNumber;
        else
            std::cout << firstNumber << ", " << secondNumber;
    }
    else
    {
        if (secondNumber < firstNumber)
        {
            std::cout << secondNumber << ", ";
            if (thirdNumber < firstNumber)
                std::cout << thirdNumber << ", " << firstNumber;
            else
                std::cout << firstNumber << ", " << thirdNumber;
        }
        else
            std::cout << firstNumber << ", ";
        if (thirdNumber < secondNumber)
            std::cout << thirdNumber << ", " << secondNumber;
        else
            std::cout << secondNumber << ", " << thirdNumber;
    }
    
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe.Wyœwietl odpowiedni komunikat.
void task7()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj dwie liczby ca³kowite, aby sprawdziæ czy s¹ równe";
    std::cout << "Podaj pierwsz¹ liczbê:\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug¹ liczbê:\n";
    std::cin >> secondNumber;

    if (firstNumber == secondNumber)
        std::cout << "Liczby s¹ sobie równe";
    else
        std::cout << "Liczby s¹ ró¿ne";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona parzysta. Wyœwietl odpowiedni komunikat.
void task8()
{
    int numberFromUser;
    std::cout << "Podaj liczbê, aby sprawdziæ czy jest parzysta";
    std::cout << "Podaj liczbê:\n";
    std::cin >> numberFromUser;

    if (numberFromUser % 2 == 0)
        std::cout << "Liczba jest parzysta";
    else
        std::cout << "Liczba nie jest parzysta";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task9()
{
    int numberFromUser;
    std::cout << "Program sprawdza czy liczba jest podzielna przez 3 i przez 5";
    std::cout << "Podaj liczbê:\n";
    std::cin >> numberFromUser;

    if (numberFromUser % 3 == 0 && numberFromUser % 5 == 0)
        std::cout << "Liczba jest podzielna przez 3 i przez 5";
    else
        std::cout << "Liczba nie jest podzielna przez te liczby";
}

/*Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
BMI = masa / wzrost ^ 2
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹
*/
void task10()
{
    float heightFromUser, weightFromUser, bMI;
    std::cout << "Program oblicza BMI\n";
    std::cout << "Podaj swój wzrost\n";
    std::cin >> heightFromUser;
    std::cout << "Podaj swoj¹ wagê\n";
    std::cin >> weightFromUser;

    bMI = weightFromUser / (heightFromUser * heightFromUser);

    if (bMI < 16)
        std::cout << "Jesteœ wyg³odzony";
    else
        if (bMI >= 16 && bMI <= 16.99)
            std::cout << "Jesteœ wychudzony";
        else
            if (bMI >= 17 && bMI <= 18.49)
                std::cout << "Masz niedowagê";
            else
                if (bMI >= 18.5 && bMI <= 24.99)
                    std::cout << "Masz prawid³ow¹ wagê";
                else
                    if (bMI >= 25 && bMI <= 29.9)
                        std::cout << "Masz nadwagê";
                    else
                        if (bMI >= 30 && bMI <= 34.99)
                            std::cout << "Masz I stopieñ oty³oœci";
                        else
                            if (bMI >= 35 && bMI <= 39.99)
                                std::cout << "Masz II stopieñ oty³oœci";
                            else
                                if (bMI >= 40)
                                    std::cout << "Masz skrajn¹ oty³oœæ";
                                else
                                    std::cout << "....";
                                
        

}

int main()
{
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    task10();
}