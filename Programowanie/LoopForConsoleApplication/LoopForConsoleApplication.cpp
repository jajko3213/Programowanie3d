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
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}
	
	std::cout << "Suma liczb od 1 do 100 wynosi: " << sum;
}

// Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task5()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i * i << ", ";
	}
}

//Program obliczaj¹cy n!.
void task6()
{
	int number, silnia = 1;

	do
	{
		std::cout << "Podaj liczbê dodatni¹: ";
		std::cin >> number;
	} while (number < 0);

	for (int i = number; i > 1; i--)
	{
		silnia *= i;
	}

	std::cout << "Silnia z liczby " << number << " wynosi: " << silnia;
}

//Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
void task7()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i * i;
	}
	std::cout << "Suma kwadratów liczb od 1 do 10 wynosi: " << sum;
}

//Program, który wczyta podstawê oraz wyk³adnik oraz wyliczy wynik.
void task8()
{
	int result = 1, base, exponent;

	std::cout << "Podaj podstawê: ";
	std::cin >> base;
	std::cout << "Podaj wyk³adnik: ";
	std::cin >> exponent;

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	std::cout << "Wynik wynosi :" << result;
}

//Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << ", ";
	}
}

//Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task10()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << "x" << j << "=" << i * j << "\n";
		}
	}
}

//Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task11()
{
	for (int i = 1; i <= 10; i++)
	{
		int silnia = 1;
		for (int j = 1; j <= i; j++)
		{
			silnia *= j;
		}
		std::cout << "Silnia z " << i << " to " << silnia << "\n";
	}
}

//Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹(czyli tak¹, której suma dzielników(z wy³¹czeniem samej siebie) jest równa danej
//liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
void task12()
{
	int number, counter = 0, i;

	std::cout << "Podaj liczbê: ";
	std::cin >> number;

	for (i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			counter += i;
		}	
	}
	
	if (counter == number)
		std::cout << "Liczba któr¹ poda³eœ jest liczb¹ doskona³¹.";
	else
		std::cout << "Liczba któr¹ poda³eœ nie jest liczb¹ doskona³¹.";
}

//Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element 
//jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task13()
{
	int fibonacciNumber = 0, tmp = 1, tmpSecond = 0;

	for (int i = 0; i < 20; i++)
	{
		tmpSecond = fibonacciNumber;
		std::cout << fibonacciNumber << ", ";
		fibonacciNumber = fibonacciNumber + tmp;
		tmp = tmpSecond;
	}
}

/* Program, kóry wyœwietli poni¿sze wzory:
****     *		54321        121212        122333
*** 	***		65432        212121        223334444
**	   *****	76543        121212        333444455555
*     *******	87654        212121        444455555666666
*/
void task14()
{
	std::cout << "**** \n***\n** \n* \n";
	std::cout << "\n   *\n  ***\n *****\n*******\n";
	std::cout << "\n54321\n 65432\n 76543\n 87654\n";
	std::cout << "\n121212\n 212121\n 121212\n 212121\n";
	std::cout << "\n122333\n 223334444\n 333444455555\n 444455555666666";
}

//Napisz program który roz³o¿y liczbê na czynniki pierwsze
void task15()
{

}

//Oblicz sumê szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Je¿eli siê nie pomylisz, to dla odpowiednio du¿ej wartoœci n po przemno¿eniu 
//jej przez 6 i spierwiastkowaniu powinieneœ otrzymaæ wartoœæ liczby ? (suma szeregu jest równa ?2/6). Zwróæ uwagê, ¿e pierwsza 
//wartoœæ indeksu to 1, a nie 0. Dok³adnoœæ obliczeñ mo¿na sprawdziæ porównuj¹c z wartoœci¹ odczytan¹ z w³asnoœci Math.PI.

int main()
{
    setlocale(LC_CTYPE, "polish");
	task15();
}

