#pragma once
#include "BankAccount.h"

class SavingBankAccunt : public BankAccount
{
	double interestRate; // oprocentowanie

public:

	void CalculateInterestRate()
	{
		//balacne = balance + balance * interestRate;
	}
};

