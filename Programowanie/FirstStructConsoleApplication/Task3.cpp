#include <iostream>

struct bankAccount
{
	double balance; // stan konta
	std::string owner; //w³aœciciel
	std::string currency; // waluta
};

void accountInformation(bankAccount &account)
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

void task3()
{
	bankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	accountInformation(firstAccount);
}