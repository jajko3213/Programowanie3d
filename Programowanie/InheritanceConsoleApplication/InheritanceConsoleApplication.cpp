#include <iostream>
#include "SavingBankAccount.h"

int main()
{
    setlocale(LC_CTYPE, "polish");
    SavingBankAccount savingBankAccount(10000, "Ewa", "z³", 0.05);
    savingBankAccount.AccountInformation();
}
