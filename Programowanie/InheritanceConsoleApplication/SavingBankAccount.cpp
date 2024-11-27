#include "SavingBankAccount.h"

void SavingBankAccount::AccountInformation()
{
	BankAccount::AccountInformation();
	std::cout << "Oprocentowanie: " << interestRate << "\n";
}

