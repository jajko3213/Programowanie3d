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
/*
	 Wzór na NWD = { a , b = 0												}
				   { NWD(b, a % b), b != 0 (skreœlony znak równoœci, nie !=)}
*/
void task2()
{
	int firstNumber, secondNumber;

	do
	{
		std::cout << "Podaj pierwsz¹ liczbê dodatni¹: \n";
		std::cin >> firstNumber;
	} while (firstNumber < 0);

	do
	{
		std::cout << "Podaj drug¹ liczbê dodatni¹: \n";
		std::cin >> secondNumber;
	} while (secondNumber < 0);

	if (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
		if (secondNumber != 0)
		{
			//...
		}
	}

	std::cout << "NWD = " << firstNumber;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task2();
}

