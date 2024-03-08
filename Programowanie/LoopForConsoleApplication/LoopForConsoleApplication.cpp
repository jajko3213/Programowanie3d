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

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}

