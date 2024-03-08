#include <iostream>

//Napisz program, który wyœwietli "Hello World" tyle razy ile chce u¿ytkownik
void task1()
{
	int number;
    
	do
	{
		std::cout << "Podaj pierwsz¹ liczbê dodatni¹: \n";
		std::cin >> number;
	} while (number < 0);
    
	for (int counter = 0; counter != number; counter++)
	{
		std::cout << "Hello World\n";
	}
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

