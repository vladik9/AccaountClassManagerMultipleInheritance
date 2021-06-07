#include <iostream>
#include "Account.h"           // Banck Account
#include "Account.cpp"         // for users
#include "Savings_Account.h"   // Inherited
#include "Savings_Account.cpp" // from Account
#include <vector>              // vector libary
#include "Utilities.h"         // vector utilities
#include "Utilities.cpp"       // for Account and SavingAccounts
#include "CheckAccount.h"      // Check account and extract
#include "CheckAccount.cpp"    // 1,5 pertransaction
#include "TrustAccount.h"      // Bonus amount afeter reach
#include "TrustAccount.cpp"    // summ of 5000, max 3 transaction

int main()
{
     TrustAccount empty{" Vlad", 300, 5};
     empty.deposit(1000);
     std::cout << "" << empty.getBalance() << std::endl;
     empty.deposit(5000);
     std::cout << "" << empty.getBalance() << std::endl;

     empty.withdraw(1300);
     std::cout << "New balance: " << empty.getBalance() << std::endl;
     empty.withdraw(1000);
     std::cout << "New balance: " << empty.getBalance() << std::endl;
     empty.withdraw(800);
     std::cout << "New balance: " << empty.getBalance() << std::endl;
     empty.withdraw(50);
     std::cout << "New balance: " << empty.getBalance() << std::endl;

     return 0;
}
