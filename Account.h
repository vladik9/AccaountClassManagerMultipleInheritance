#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>
class Account
{
     friend std::ostream &operator<<(std::ostream &out, const Account &ref);

private:
     static constexpr const char *default_name = "Unamed account";
     static constexpr const double default_balance = 0.0;

protected:
     std::string name;
     double balance;

public:
     Account(std::string u_name = default_name,
             double u_balance = default_balance);
     bool deposit(double amount);
     bool withdraw(double amount);
     double getBalance() const;
};

#endif // !_ACCOUNT_H_
