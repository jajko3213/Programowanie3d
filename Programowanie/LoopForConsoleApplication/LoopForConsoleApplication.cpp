#include <iostream>

//Napisz program, który wyœwietli "Hello World" tyle razy ile chce u¿ytkownik
void task1()
{
	int number;
    
	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);
    
	for (int i = 0; i != number; i++)
	{
		std::cout << "Hello World\n";
	}
}

//Napisz program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
void task2()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << "\n";
	}
}

//Namaluj równoleg³obok z "X". Wysokoœæ i szeokoœæ wczytaj z klawiatury.
void task3()
{
	int width, height;

	do
	{
		std::cout << "Podaj szerokoœæ: \n";
		std::cin >> width;
	} while (width < 0);

	do
	{
		std::cout << "Podaj wysokoœæ: \n";
		std::cin >> height;
	} while (height < 0);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X";
		}
		std::cout << "\n";
	}
}

//Program obliczaj¹cy sumê liczb od 1 do 100
void task4()
{
	int sum = 0, number;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}
	
	std::cout << "Suma liczb od 1 do 100 wynosi: " << sum;
}

/*
Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹(czyli tak¹, której suma dzielników(z wy³¹czeniem samej siebie) jest równa danej
liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
*/
void task5()
{
	int sumOfDivisors = 0, number;

	do
	{
		std::cout << "Podaj liczbê: \n";
		std::cin >> number;
	} while (number < 0);

	for (int i = 0; i < number; i++)
	{
		if ()
	}
}

/*
* 
* 
* Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczaj¹cy n!.
* Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
* Program, który wczyta podstawê oraz wyk³adnik oraz wyliczy wynik.
* Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
*/

int main()
{
    setlocale(LC_CTYPE, "polish");
    task4();
}

