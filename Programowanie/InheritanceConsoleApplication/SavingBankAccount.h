#pragma once
#include "BankAccount.h"

class SavingBankAccount : public BankAccount
{
	double interestRate; // oprocentowanie

public:

	SavingBankAccount() //: BankAccount()
	{
		interestRate = 0.05;
	}

	SavingBankAccount(double b, std::string o, std::string c, double ir) : BankAccount(b, o, c)
	{
		interestRate = ir;
	}

	void CalculateInterestRate()
	{
		balance = balance + balance * interestRate;
	}
};

/*
Modyfikatory dostepu: 
public - cz³onek jejest dostêpny tylko w obrst dostêpny dla wszystkich (zarówno zewnêtrznych klas, jak i w obrêbie tej samej klasy).
private - Cz³onek êbie tej klasy (nie jest dostêpny w klasach pochodnych ani spoza klasy).
protected - Cz³onek jest dostêpny w obrêbie klasy, a tak¿e w klasach pochodnych 
(czyli w klasach dziedzicz¹cych), ale nie jest dostêpny dla innych klas.

Aby stworzyæ klasiê dziedziczn¹, nale¿y stworzyæ now¹ klasê i po jej nazwie w pliku h wpisaæ 
: public (NazwaKlasyBazowej) i dopisaæ nowe cechy do klasy dziedzicznej. 
Klasa dziedziczna jest tworzona w nastêpuj¹cy sposób: 
-Wywo³anie konstruktora klasy bazowej
-Inicjalizacja sk³adników(cech, pól) klasy dziedzicznej
-Wywo³anie konstruktora klasy dziedzicznej

Aby wywo³aæ odpowiedni konstruktor bazowy nale¿y przy konstruktorze parametrowym klasy dziedzicznej
wpisaæ nazwê konstruktora bazowego z parametrami: 

    SavingBankAccount(double b, std::string o, std::string c, double ir) : BankAccount(b, o, c)
	{
		interestRate = ir;
	}

BEZ NAWIASÓW KWADRATOWYCH TO TYLO DLA ZAZNACZENIA CO DO KTÓREGO KONSTRUKTORA!
Aby wywo³aæ konstruktor parametrowy nale¿y np. SavingBankAccount firstAccount([1000, "Ewa", "z³"] konstruktor bazowy, 0.05);
Tworz¹c cia³o konstrukotra w pliku cpp nale¿y napisaæ nazwê klasy dwa dwukropki :: i nazwê konstrukotra z parametrami

Metody mo¿na przes³aniaæ, przes³onienie polega na tym, ¿e w klasie bazowej i dziedzicznej istnieje
metoda o takim samym nag³ówku oraz zestawie parametrów i gdy wywo³ujemy metodê dla obiektu klasy dziedzicznej
to wywo³ywana jest metoda, która jest w klasie dziedzicznej. Ale jeœli chcemy wywo³aæ tak¹ sam¹ metodê z
klasy dziedzicznej i bazowej to nale¿y napisaæ przed metod¹ z klasy nazwê klasy bazowej np.
void AccountInformation()  klasa dziedziczna(metoda)
{
	BankAccount::AccountInformation(); klasa bazowa (metoda) 
	cout << "hi";
}

Mo¿na dziedziczyæ wiêcej ni¿ po klasie bazowej, mo¿na po przecinku dodaæ inn¹ klasê (raczej nie robiæ wielodziedziczenia)
*/