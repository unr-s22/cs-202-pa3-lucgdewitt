#include "Account.h"

Account::Account(Money m): balance (m) {}

void Account::makeDeposit(Money d){

    Account::deposits.push_back(d);
    Account::update = 1;

}

void Account::makeWithdrawals(Money w){

    Account::withdrawals.push_back(w);
    Account::update = 1;

}

std::ostream & operator << (std::ostream &out, Account &a){
    
    int numOfDeposits = 0;
    int numOfWithdrawals = 0;

    //first, updates balance

    //checks if balance needs to be updated
    if(a.update == 1){
        
        //checks if acc has deposits
        if(!a.deposits.empty()){
            //loops through deposits vector and adds to balance
            for (int i = 0; i < a.deposits.size(); i++){
                a.balance = a.balance + a.deposits[i];
                numOfDeposits++;
            }
        }
        //checks if acc has withdrawals
        if(!a.withdrawals.empty()){
            //loops through withdrawals vector and subtracs from balance
            for (int i = 0; i < a.withdrawals.size(); i++){
                a.balance = a.balance - a.withdrawals[i];
                numOfWithdrawals++;
            }
        }

    }

    //second, prints

    //for convenience
    std::string lines = "--------------------------\n";

    out << "Account Details\n" << lines << "Current Balance: $" << a.balance << lines;
    out << "Number of Deposits: " << numOfDeposits << std::endl << lines;

    //loops and displays deposits
    if (numOfDeposits != 0){
        for (int i = 0; i < a.deposits.size(); i++){
            out << "(" << i + 1 << ") " << a.deposits[i];
        }
        out << lines;
        //clears vector
        a.deposits.clear();
    }

    out << "Number of Withdrawals: " << numOfWithdrawals << std::endl << lines;

    //loops and displays withdrawals
    if (numOfWithdrawals != 0){
        for (int i = 0; i < a.withdrawals.size(); i++){
            out << "(" << i + 1 << ") " << a.withdrawals[i];
        }
        out << lines;
        //clears vector
        a.withdrawals.clear();
    }



    return out;
    }
