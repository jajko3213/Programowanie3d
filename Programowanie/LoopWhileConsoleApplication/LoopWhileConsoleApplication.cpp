#include <iostream>

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task1()
{
	
	int number, numberOfDigit = 1;
	
	do
	{
		std::cout << "Podaj liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);
	/*
	if (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
		if (number > 9)
		{
			number = number / 10;
			numberOfDigit++;
			if (number > 9)
			{
				//...
			}
		}
	}
	*/

	while (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
	}

	std::cout << "Iloœæ cyfr w liczbie wynosi: " << numberOfDigit;
}

//Napisz program, który policzy NWD dwóch liczb.
void task2()
{
	/*
	 Wzór na NWD = { a , b = 0												}
				   { NWD(b, a % b), b != 0 (skreœlony znak równoœci, nie !=)}
	*/


}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task2();
}

