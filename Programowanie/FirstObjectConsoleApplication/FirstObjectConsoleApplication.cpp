#include <iostream>

class BankAccount
{
public:
	double balance; // stan konta
	std::string owner; //w³aœciciel
	std::string currency; // waluta

	void AccountInformation()
	{
		std::cout << "Informacje o koncie bankowym.\n";
		std::cout << "W³aœciciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n\n";
	}

	void DepositToAccount(double amount)
	{
		amount = abs(amount);
		balance = balance + amount;
	}

	bool WidthDrawFromAccount(double amount)
	{
		amount = abs(amount);
		if (balance - amount >= 0)
		{

			balance = balance - amount;
			return true;
		}
		return false;
	}

	void TransferBetweenAccounts(BankAccount& targetAccount, double amount)
	{
		if (WidthDrawFromAccount(amount) == true)
			targetAccount.DepositToAccount(amount);
	}
};



int main()
{
	setlocale(LC_CTYPE, "polish");
	BankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";
	
	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	firstAccount.DepositToAccount(500);
	//depositToAccount(firstAccount, 500);

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.owner = "Ewa Kowalska";
	secondAccount.currency = "z³";

	secondAccount.AccountInformation();

	secondAccount.WidthDrawFromAccount(500);

	secondAccount.AccountInformation();

	secondAccount.TransferBetweenAccounts(firstAccount, 1000);

	firstAccount.AccountInformation();

	secondAccount.AccountInformation();  
}