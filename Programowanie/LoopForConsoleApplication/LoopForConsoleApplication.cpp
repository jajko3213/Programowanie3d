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


int main()
{
    setlocale(LC_CTYPE, "polish");
    task3();
}

