#pragma once
#include "BankAccount.h"

class SavingBankAccount : public BankAccount
{
	double interestRate; // oprocentowanie

public:

	SavingBankAccount() //: BankAccoutn()
	{
		interestRate = 0.05;
	}

	SavingBankAccount(double b, std::string o, std::string c, double ir)
		: BankAccount(b, o, c)
	{
		interestRate = ir;
	}

	void CalculateInterestRate()
	{
		balance = balance + balance * interestRate;
	}
};

