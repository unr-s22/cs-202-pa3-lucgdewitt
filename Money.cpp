#include "Money.h"


/*
    Money::Money(int dollars, int cents):dollars(dollars),cents(cents){
        dollars = addDollar;
        cents = addCents;
    }
    */

    //overloading math operators + -
    Money Money::operator+(const Money& M){
        Money cash;
        cash.dollars = this->dollars + M.dollars;
        cash.cents = this->cents + M.cents;

        return cash;
    }

    Money Money::operator - (const Money& M){
        Money cash;
        cash.dollars = this->dollars - M.dollars;
        cash.cents = this->cents - M.cents;

        return cash;
    }


    //overloading relational operators <,>,<=,>=,!=,==
    Money Money::operator < (const Money& M){
        Money cash;
        if(cash.dollars < M.dollars){
            return cash;
        }
        else if(cash.dollars == M.dollars){
            if(cash.cents < M.cents){
                return cash;
            }
            else{
                cash = M;
                return cash;
            }
        }

    }

    Money Money::operator > (const Money& M){
        Money cash;
        if(cash.dollars > M.dollars){
            return cash;
        }
        else if(cash.dollars == M.dollars){
            if(cash.cents > M.cents){
                return cash;
            }
            else{
                cash = M;
                return cash;
            }
        }

    }

    Money Money::operator <= (const Money& M){
        Money cash;
        if(cash.dollars <= M.dollars){ //Determine if cash is <= to M
            if(cash.dollars == M.dollars){  //If it is then determine if cash is == to M
                if(cash.cents < M.cents){  //If it is then determine which has the < cents
                    return cash;        //if cash has < cents than M it returns the cash amount
                }
                else{           //If cash has >= cents to M it turns cash to M then returns cash
                    cash = M;
                    return cash;
                }

            }
            return cash;
        }
        else{               //If cash has > dollars than M it automatically changes
            cash = M;       //cash to M, then returns cash
            return cash;

        }

    }

    Money Money::operator >= (const Money& M){
       Money cash;
        if(cash.dollars >= M.dollars){ //Determine if cash is >= to M
            if(cash.dollars == M.dollars){  //If it is then determine if cash is == to M
                if(cash.cents > M.cents){  //If it is then determine which has the > cents
                    return cash;        //if cash has > cents than M it returns the cash amount
                }
                else{           //If cash has <= cents to M it turns cash to M then returns cash
                    cash = M;
                    return cash;
                }

            }
            return cash;
        }
        else{               //If cash has > dollars than M it automatically changes
            cash = M;       //cash to M, then returns cash
            return cash;

        }

    }

    Money Money::operator != (const Money& M){
Money cash;
        if(cash.dollars == M.dollars){ //Determine if cash is == to M
            if(cash.cents == M.cents){  //If it is then determine if cash has the same cents as M
                return cash;        //if cash has == cents than M it returns???
            }
            else{           //If cash has != cents to M returns??
                //cash = M;
                return cash;
            }

            
            return cash;
        }
        else{               //If cash has != dollars than M it automatically returns??
            //cash = M;       
            return cash;

        }

    }

    Money Money::operator == (const Money& M){  //Working on understanding the logic

    }


    //overloading << 
    std::ostream & operator << (std::ostream &out, const Money& M){
        out << M.dollars;
        out << "." << M.cents << std::endl;
    return out;
    }