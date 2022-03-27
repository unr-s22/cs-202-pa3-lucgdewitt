#include <iostream>
#include "Account.h"

int main(){

    Money startingbal(300, 23);
    Account NewAccount(startingbal);

    std::cout << NewAccount << std::endl;

    Money dep1(200, 0);
    Money dep2(300, 24);
    Money dep3(501, 22);
    NewAccount.makeDeposit(dep1);
    NewAccount.makeDeposit(dep2);
    NewAccount.makeDeposit(dep3);

    std::cout << NewAccount << std::endl;

    Money wtd1(300, 10);
    Money wtd2(201, 34);
    NewAccount.makeWithdrawals(wtd1);
    NewAccount.makeWithdrawals(wtd2);

    std::cout << NewAccount << std::endl;

    return 0;
}
