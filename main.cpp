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

    Money obj1(20,10);
    Money obj2(10,5);

//overloading testing >
if(obj1 > obj2){
    std::cout << "obj1 is bigger" << std::endl;
}
else{
    std::cout << "obj2 is bigger" <<std::endl;
}

//overloading testing <
if(obj1 < obj2){
    std::cout << "obj1 is smaller" << std::endl;
}
else{
    std::cout << "obj2 is smaller" << std::endl;
}

//overloading testing >=
if(obj1 >= obj2){
    std::cout << "obj1 is greater than or equal to obj2" << std::endl;
}
else{
    std::cout << "obj1 is less than obj2" << std::endl;
}

//overloading testing <=
if(obj1 <= obj2){
    std::cout << "obj1 is less than or equal to obj2" <<std::endl;
}
else{
    std::cout << "obj1 is greater than obj2" <<std::endl;
}

//overloading testing =
if(obj1 == obj2){
    std::cout << "obj1 is equal to obj2" <<std::endl;
}
else{
    std::cout << "obj1 is not equal to obj2" <<std::endl;
}

//overloading testing !=
if(obj1 != obj2){
    std::cout << "obj1 is not equal to obj2" <<std::endl;
}
else{
    std::cout << "obj1 is equal to obj2" <<std::endl;
}

    return 0;
}
