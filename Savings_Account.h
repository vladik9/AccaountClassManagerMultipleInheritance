#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account
{
     friend std::ostream &operator<<(std::ostream &out, const SavingsAccount &account);
     static constexpr const char *default_name = "Unamed Savings Account";
     static constexpr const double default_balance = 0.0;
     static constexpr const double default_interest_rate = 0.0;

protected:
     double interest_rate;

public:
     SavingsAccount(std::string u_name = default_name,
                    double u_balance = default_balance,
                    double u_interest_rate = default_interest_rate);
     bool deposit(double amount);
};
#endif // !_SAVINGS_ACCOUNT_H