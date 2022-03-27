
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Money.h"
#include <vector>

class Account: public Money{
private:
    //current balance
    Money balance;

    //flag that is set if a deposit or withdrawal is made
    bool update = 0;

    //vectors that hold deposits and withdrawals
    std::vector<Money> deposits;
    std::vector<Money> withdrawals;

public:
    //constructor
    Account(Money m);

    //methods
    void makeDeposit(Money d);

    void makeWithdrawals(Money w);

    //overloading
    friend std::ostream &operator << (std::ostream &out, Account &a);

};


#endif