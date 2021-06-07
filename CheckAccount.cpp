#include "CheckAccount.h"

CheckAccount::CheckAccount(std::string u_name, double u_balance)
    : Account(u_name, u_balance), fee{default_fee} {}

void CheckAccount::withdraw(double amount)
{
     amount += default_fee;
     Account::withdraw(amount);
}