#include <iostream>

//Napisz program który, wczyta od u¿ytkownika liczbê dodatni¹
void task1()
{
/*  int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj liczbê dodatni¹\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczbê dodatni¹\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczbê dodatni¹\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
					//b³êdny algorytm
				}
			}
		}
	}
	std::cout << "Podano liczbê " << number << "\n";
*/

	int number;
	do
	{
		std::cout << "Podaj liczbê\n";
		std::cin >> number;
	} while (number < 0);
	std::cout << "Podano liczbê " << number << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

