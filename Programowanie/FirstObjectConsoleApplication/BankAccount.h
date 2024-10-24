#pragma once
#include <iostream>

class BankAccount
{
//private oznacza, ¿e te rzeczy s¹ dostêpne tylko w klasie. Pola powinny byæ prywatne.
private:
	double balance; // stan konta
	std::string owner; //w³aœciciel
	std::string currency; // waluta

public:
	void AccountInformation();
	
	void DepositToAccount(double amount);
	
	bool WidthDrawFromAccount(double amount);
	
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};
