#ifndef _CHECKACCOUNT_H_
#define _CHECKACCOUNT_H_
#include "Account.h"

class CheckAccount : public Account
{
protected:
     static const int bonus = 50;
     static constexpr const double default_fee = 1.50;
     static constexpr const char *default_name = "Unamed account";
     static constexpr const double default_balance = 0.0;

private:
     double fee;

public:
     CheckAccount(std::string u_name = default_name, double u_balance = default_balance);
     void withdraw(double amount);
};
#endif // !_CHECKACCOUNT_H_