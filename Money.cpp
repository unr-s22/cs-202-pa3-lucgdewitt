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
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }

        return cash;
    }

    Money Money::operator - (const Money& M){
        Money cash;
        cash.dollars = this->dollars - M.dollars;
        cash.cents = this->cents - M.cents;
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }

        return cash;
    }


    //overloading relational operators <,>,<=,>=,!=,==
    bool Money::operator < (const Money& M){
        Money cash;
        cash.dollars = this->dollars;
        cash.cents = this->cents;
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }

        if(cash.dollars < M.dollars){
            return 1;
        }
        else if(cash.dollars == M.dollars){
            if(cash.cents < M.cents){
                return 1;
            }
            else{
                //cash = M;
                return 0;
            }
        }
        else if(cash.dollars > M.dollars){
            return 0;
        }

    }

    bool Money::operator > (const Money& M){
        Money cash;
        cash.dollars = this->dollars;
        cash.cents = this->cents;
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }

        if(cash.dollars > M.dollars){
            return 1;
        }
        else if(cash.dollars == M.dollars){
            if(cash.cents > M.cents){
                return 1;
            }
            else{

                return 0;
            }
            
        }
        else if(cash.dollars < M.dollars){
            return 0;
        }

    }

    bool Money::operator <= (const Money& M){
        Money cash;
        cash.dollars = this->dollars;
        cash.cents = this->cents;
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }

        if(cash.dollars <= M.dollars){ //Determine if cash is <= to M
            if(cash.dollars == M.dollars){  //If it is then determine if cash is == to M
                if(cash.cents <= M.cents){  //If it is then determine which has the < cents
                    return 1;        //if cash has < cents than M it returns the cash amount
                }
                else{           //If cash has >= cents to M it turns cash to M then returns cash
                    //cash = M;
                    return 0;
                }

            }
            else{
                return 1;
            }
        }
        else{               //If cash has > dollars than M it automatically changes
                   //cash to M, then returns cash
            return 0;

        }

    }

    bool Money::operator >= (const Money& M){
       Money cash;
        cash.dollars = this->dollars;
        cash.cents = this->cents;
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }

        if(cash.dollars >= M.dollars){ //Determine if cash is >= to M
            if(cash.dollars == M.dollars){  //If it is then determine if cash is == to M
                if(cash.cents >= M.cents){  //If it is then determine which has the > cents
                    return 1;        //if cash has > cents than M it returns the cash amount
                }
                else{           //If cash has <= cents to M it turns cash to M then returns cash
                    
                    return 0;
                }

            }
            else{
                return 1;
            }
        }
        else{               //If cash has > dollars than M it automatically changes
                   //cash to M, then returns cash
            return 0;

        }

    }

    bool Money::operator != (const Money& M){
        Money cash;
        cash.dollars = this->dollars;
        cash.cents = this->cents;
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }

        if(cash.dollars == M.dollars){ //Determine if cash is == to M
            if(cash.cents == M.cents){  //If it is then determine if cash has the same cents as M
                return 0;        //if cash has == cents than M it returns???
            }
            else{           //If cash has != cents to M returns??
                //cash = M;
                return 1;
            }

        }
        else{               //If cash has != dollars than M it automatically returns??
            //cash = M;       
            return 1;

        }

    }

    bool Money::operator == (const Money& M){  //Working on understanding the logic
        Money cash;
        cash.dollars = this->dollars;
        cash.cents = this->cents;
        while(cash.cents > 99){
            cash.cents = cash.cents - 100;
            cash.dollars = cash.dollars + 1;
        }
        if(cash.dollars == M.dollars){ //Determine if cash is == to M
            if(cash.cents == M.cents){  //If it is, then determine if cash has the same cents as M
                return 1;        //if cash has == cents than M it returns 1
            }
            else{           //If cash has != cents to M returns 0
                //cash = M;
                return 0;
            }

        }
        else{               //If cash has != dollars than M it automatically returns 0
            //cash = M;       
            return 0;

        }

    }


    //overloading << 
    std::ostream & operator << (std::ostream &out, const Money& M){ // may need friend keyword at start of line
        out << M.dollars; 
        out << "." << M.cents << std::endl;
    return out;
    }