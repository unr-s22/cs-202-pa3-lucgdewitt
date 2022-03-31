//#ifndef MONEY_H
//#define MONEY_H

#include <iostream>
#include <ostream>

class Money{
private:

    int dollars;
    int cents;
public:

    //Money();

    Money(int dol = 0, int cen = 0){
        dollars = dol;
        cents = cen;
    }


    //overloading << 
    friend std::ostream & operator << (std::ostream &out, const Money& M);


    //overloading math operators + -
    virtual Money operator + (const Money& M);

    virtual Money operator - (const Money& other);

    //overloading relational operators <,>,<=,>=,!=,==
    virtual bool operator < (const Money& other);

    virtual bool operator > (const Money& other);

    virtual bool operator <= (const Money& other);

    virtual bool operator >= (const Money& other);

    virtual bool operator != (const Money& other);

    virtual bool operator == (const Money& other);

    


};

//#endif //endig MONEY_H




/*
          ____     _____
         [     `~`       \
         [                \ 
  ______ [                 \ _____ 
 |      \                   \      \
r        \____ Luc DeWitt    \__    |
L_______       \ __________________/  
*/



