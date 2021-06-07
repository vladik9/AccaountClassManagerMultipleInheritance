#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H
#include "Savings_Account.h"

class TrustAccount : public SavingsAccount
{
     static constexpr const char *default_name = "Unamed Savings Account";
     static constexpr const double default_balance = 0.0;
     static constexpr const double default_interest_rate = 0.0;

public:
     TrustAccount(std::string u_name = default_name, double u_balance = default_balance, double u_interest_rate = default_interest_rate);
     void deposit(double amount);
     void withdraw(double amount);
     static int max_withdraw_op;
};

#endif // !_TRUST_ACCOUNT_H