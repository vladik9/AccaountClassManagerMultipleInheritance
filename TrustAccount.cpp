#include "TrustAccount.h"
int TrustAccount::max_withdraw_op{3};

TrustAccount::TrustAccount(std::string u_name, double u_balance, double u_interest_rate)
    : SavingsAccount(u_name, u_balance, u_interest_rate) {}

void TrustAccount::deposit(double amount)
{
     if (amount >= 5000)
     {
          amount += 50;
     }
     SavingsAccount::deposit(amount);
}

void TrustAccount::withdraw(double amount)
{
     if (max_withdraw_op > 0)
     {
          if (amount <= (balance * 0.2))
          {
               SavingsAccount::withdraw(amount);
               max_withdraw_op--;
               std::cout << "Amount of: " << amount << " has been withdraw!" << std::endl;
          }
          else
          {
               std::cout << "Amount of: " << amount
                         << " can not been withdraw is more that 20% from balance" << std::endl;
          }
     }
     else
     {
          std::cout << "You reache maximum numbers of transactions,\nyou have: " << max_withdraw_op << " transactions!" << std::endl;
     }
}
