#include "Utilities.h"
// Account
void display(const std::vector<Account> &accounts)
{
     for (auto &acc : accounts)
     {
          std::cout << "Acc " << acc << std::endl;
     }
}
void deposit(std::vector<Account> &accounts, double amount)
{
     for (auto &acc : accounts)
     {
          if (acc.deposit(amount))
          {
               std::cout << "It's was deposited " << amount << " to " << acc << std::endl;
          }
          else
          {
               std::cout << "Failed desposited " << amount << " to " << acc << std::endl;
          }
     }
}

void withdraw(std::vector<Account> &accounts, double amount)
{
     for (auto &acc : accounts)
     {
          if (acc.withdraw(amount))
          {
               std::cout << "Withdraw " << amount << " from " << acc << std::endl;
          }
          else
          {
               std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
          }
     }
}
// SavingAccount

void display(const std::vector<SavingsAccount> &accounts)
{
     for (auto &acc : accounts)
     {
          std::cout << "Acc name: " << acc << std::endl;
     }
}
void deposit(std::vector<SavingsAccount> &accounts, double amount)
{
     for (auto &acc : accounts)
     {
          if (acc.deposit(amount))
          {
               std::cout << "It's was deposited " << amount << " to " << acc << std::endl;
          }
          else
          {
               std::cout << "Failed desposited " << amount << " to " << acc << std::endl;
          }
     }
}

void withdraw(std::vector<SavingsAccount> &accounts, double amount)
{
     for (auto &acc : accounts)
     {
          if (acc.withdraw(amount))
          {
               std::cout << "Withdraw " << amount << " from " << acc << std::endl;
          }
          else
          {
               std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
          }
     }
}