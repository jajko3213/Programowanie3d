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

//Napisz program, który wylosuje liczbê, a nastêpnie u¿ytkownik bêdzie musia³ j¹ odgadn¹æ
void task2()
{
	int randomNumber, numberFromUser, userAttempt;

	userAttempt = 0;
	srand(time(0));
	randomNumber = rand() % 101;

	std::cout << "Wylosowano liczbê z zakresu od 0 do 100 odgadnij j¹.\n";
	
	do
	{
		std::cout << "Podaj liczbê: \n";
		std::cin >> numberFromUser;
		userAttempt++;

		if (numberFromUser < randomNumber)
			std::cout << "Liczba jest za ma³a\n";
		else if (numberFromUser > randomNumber)
			std::cout << "Liczba jest za du¿a\n";
		else
			std::cout << "Zgad³eœ " << "po " << userAttempt << " prób(ie)ach.\n" << "Wylosowan¹ liczb¹ jest: " << randomNumber << "\n";
	} while (numberFromUser != randomNumber);
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task2();
}

