#include "Account.h"

Account::Account(std::string u_name, double u_balance)
    : name(u_name), balance(u_balance)
{
}
bool Account::deposit(double amount)
{
     if (amount <= 0)
          return false;

     balance += amount;
     return true;
}
bool Account::withdraw(double amount)
{
     if (balance - amount >= 0)
     {
          balance -= amount;
          return true;
     }

     return false;
}
double Account::getBalance() const { return balance; }

std::ostream &operator<<(std::ostream &out, const Account &ref)
{
     out << "[ " << ref.name << " has: " << ref.balance << " ]" << std::endl;
     return out;
}