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

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

