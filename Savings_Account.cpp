#include "Savings_Account.h"
std::ostream &operator<<(std::ostream &out, const SavingsAccount &account)
{
     out << "[ "
         << account.name << " has an: "
         << account.balance << " on the: "
         << account.interest_rate << " rate ]" << std::endl;
     return out;
}
SavingsAccount::SavingsAccount(std::string u_name,
                               double u_balance,
                               double u_interest_rate)
    : Account(u_name, u_balance),
      interest_rate(u_interest_rate)
{
}
bool SavingsAccount::deposit(double amount)
{
     amount += amount * (interest_rate / 100);
     return Account::deposit(amount);
}
