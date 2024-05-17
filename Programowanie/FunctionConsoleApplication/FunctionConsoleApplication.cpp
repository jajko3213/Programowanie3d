#include <iostream>

/*
Funkcja - zbiór instrukcji. Definicja/deklaracja funkcji sk³ada siê z dwóch czêœci:
* nagówek - sposób u¿ycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametrów w nawiasie (nieobowi¹zkowe)
* cia³o - zbiór instrukcji

typZwracany nazwaFuncji(parametry)
{
	//cia³o funkcji
}
*/

void showHello()
{
	std::cout << "Hello World\n";
}

void showHelloMaciek()
{
	std::cout << "Witaj Maciej\n";
}

void showHelloJan()
{
	std::cout << "Witaj Jan\n";
}

void showWelcome(std::string n)
{
	std::cout << "Witaj " << n << "\n";
}

void showWelcomeAndAge(std::string n, int w)
{
	std::cout << "Witaj " << n << ". Wiek tej osoby to: " << w << " lat." << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	showHello();
	//jakiœ kod
	showHello();
	showHelloMaciek();
	showHelloJan();
	std::cout << "\n";
	std::string name;
	name = "Mackiek";
	showWelcome(name);
	name = "Jan";
	showWelcome(name);
	showWelcome("Anna");
	int age = 10;
	//kolejnoœæ parametrów, kolejnoœæ deklaracji
	showWelcomeAndAge("Damian", age);
}
