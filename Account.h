#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "I_Printable.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

class Account : public I_Printable {
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    string name;
    double balance;
public:
    Account(string name = def_name, double balance = def_balance);
    // Account(string name = "Unamed Account", double balance = 0.0);
     virtual bool deposit(double amount) = 0;
     virtual bool withdraw(double amount) = 0;
     virtual void print(ostream &os) const override;
     
     virtual ~Account() = default;
};
#endif