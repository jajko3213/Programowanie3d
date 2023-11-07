#include <iostream>

//Napisz program, który wczyta od u¿ytkownika jego wiek a nastêpnie wyœwietli go na konsoli
void task1()
{
	short ageFromUser;
	std::cout << "Podaj swoj wiek: ";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

//Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry, milimetry i kilometry. Wyœwitetl wynik.
void task2()
{
	float  lenghtInMeterFromUser;
	std::cout << "Podaj dlugosc w metrach: ";
	std::cin >> lenghtInMeterFromUser;

	float  lenghtInCentimiterFromUser;
	lenghtInCentimiterFromUser = lenghtInMeterFromUser * 100;

	float  lenghtInMilimiterFromUser;
	lenghtInMilimiterFromUser = lenghtInCentimiterFromUser * 10;

	float  lenghtInKilometerFromUser;
	lenghtInKilometerFromUser = lenghtInMeterFromUser / 1000;

	std::cout << "Metry: " << lenghtInMeterFromUser << "\n";
	std::cout << "Centymetry: " << lenghtInCentimiterFromUser << "\n";
	std::cout << "Milimetry: " << lenghtInMilimiterFromUser << "\n";
	std::cout << "Kilometry: " << lenghtInKilometerFromUser << "\n";

}



int main()
{
	//task1();
	task2();
}



/*

Algorytm - skoñczony zbiór instrukcji realizuj¹cy postawione przed nim zadanie. Kolejnoœæ instrukcj w zbiorze jest okreœlona.
Sposoby zapisu algorytmu:
* W punktach
* Opis s³owny
* Jêzyk programowania lub pseudokod
* Schemat blokowy

Zmienna - jest to pewien obszar pamiêci, s³ó¿¹cy do przechowywania danych, te dane mo¿na modyfikowaæ
Zmienna pozwala przechowywaæ tylko jedn¹ wartoœæ w danym momencie czasu

Deklaracja zmiennej - moment jej utworzenia
typ_zmiennej nazwa_zmiennej;
Typ zmiennej - mówi o wielkoœci obszaru w pamiêci i o rodzaju przechowywanych danych

short		liczby ca³kowite ze znakiem		2 bajty -> 16 bitów		<-32 768; 32 767>
int/long	liczby ca³kowite ze znakiem		4 bajty -> 32 bity		<-2 147 483 648; 2 147 483 647> od - 2 miliardów do 2 miliardów
long long	liczby ca³kowite ze znakiem		8 bajtów -> 64bity		<-9 223 372 036 854 775 808; 9 223 372 036 854 775 807> -9 trylionów do 9 trylionów

Je¿eli przed powy¿szymi typami danych  dodamy s³owo "unsigned" to
zakres jest od 0 do podwojonego zakresu górnego plus 1 (short->32 767*2 + 1)

float			liczby rzeczywiste ze znakiem 4 bajty
double			liczby rzeczywiste ze znakiem 8 bajtów
long double		liczby rzeczywiste ze znakiem 12 bajtów

Nazwa zmiennej jest to nazwa obszaru pamiêci. Poprzez tê nazwê odwo³ujemy siê do tego obszaru.
Wymagania kompilatora wzglêdem nazwy:
* u¿ycie tylko dozwolonych znaków - alfabet angielsk a-z oraz A-Z
* cyfry arabskie	0-9
* podkreœlenie (pod³oga)_	(nie trzeba u¿ywaæ wszystkiego)

- pierwszym znakiem nie mo¿e byæ cyfra
- nie mo¿e byæ s³owem kluczowym w danym jêzyku programowania
- musi byæ unikalny w danej widocznoœæi (dana widocznoœæ - zakres widocznoœci zmiennej)

Wymagania programistów:
- jeœli nazwa sk³ada siê z wielu wyrazów to zamiast spacji:
	* U¿ywamy znaku podkreœlenia first_number_from_user
	* stosujemy camel case, czyli piszemy wszystko razem a s³owa (zaczynamy od drugiego)
	* zaczynamy z du¿ej litery np.firstNumberFromUser
- nazwa zmiennej musi oddwaæ charakter przechowywanych danych, czyli mieæ znaczenie
- nazwy zmiennych po angielsku
*/