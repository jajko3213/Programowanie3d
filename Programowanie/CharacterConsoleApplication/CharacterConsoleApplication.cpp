#include <iostream>

//Napisz program który pobierze znak od u¿ytkownika i wyœwieli go
void task1()
{
    char characterFromUser;
    std::cout << "Podaj jeden znak:\n";
    std::cin >> characterFromUser;

    std::cout << "Podano: " << characterFromUser << "\n";

    characterFromUser = characterFromUser + 1;

    std::cout << "Podano: " << characterFromUser << "\n";

    characterFromUser = 97;
    characterFromUser = 'a';
    characterFromUser = 'a' + 1; // 'b'
}

// Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to ma³a litera alfabetu.
void task2()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;

	//wersja 1
	if (characterFromUser == 'a'
		|| characterFromUser == 'b'
		|| characterFromUser == 'c'
		|| characterFromUser == 'd'
		//...
		|| characterFromUser == 'z')
	{
		std::cout << "Poda³es ma³¹ literê alfabetu\n";
	}
	else
	{
		std::cout << "Poda³eœ inny znak\n";
	}

	//wersja 2
	if (characterFromUser >= 97
		&& characterFromUser <= 122)
	{
		std::cout << "Poda³es ma³¹ literê alfabetu\n";
	}
	else
	{
		std::cout << "Poda³eœ inny znak\n";
	}

	//wersja 3
	if (characterFromUser >= 'a'
		&& characterFromUser <= 'z')
	{
		std::cout << "Poda³es ma³¹ literê alfabetu\n";
	}
	else
	{
		std::cout << "Poda³eœ inny znak\n";
	}
}

//Napisz program, który poprosi cie o twoje imiê i ciê przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imiê\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";

	userName = "To jest nowy tekst";
}

//Program sprawdzaj¹cy czy podane has³o jest poprawne 
// (np. jeœli has³o jest "abc123", 
// program powinien wyœwietliæ "has³o poprawne",
//  jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj has³o\n";
	std::cin >> password;

	if (password == "abc123")
	{
		std::cout << "Has³o poprawne\n";
	}
	else
		std::cout << "Has³o niepoprawne\n";
}

//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
void task5()
{
	std::string textFromUser = "dfsdfg";
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

	std::cout << "Podany tekst: " << textFromUser << "\n";
	std::cout << "Pierwszy znak w tekœcie: " << textFromUser[0] << "\n";
	std::cout << "Drugi znak w tekœcie: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	std::cout << "D³ugoœæ ³añcucha znaków: " << length << "\n";
	std::cout << "Ostatni znak w tekœcie: " << textFromUser[length - 1] << "\n";

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	std::cout << "Ma³ych liter 'a' jest: " << counter << "\n";
}

// Napisz program, który bêdzie prosi³ o has³o.
// Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task6()
{
	std::string password;
	do
	{
		std::cout << "Podaj has³o\n";
		std::cin >> password;
	} while (password != "abc123");
}

//Napisz program, który pobiera od u¿ytkownika ci¹g znaków 
// i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task7()
{

}

/*
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).*/


int main()
{
	setlocale(LC_CTYPE, "polish");
    task1();
}