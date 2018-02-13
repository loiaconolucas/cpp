//
// Created by Lucas Loiacono on 2/11/18.
//

#include "checking.h"
#include <iostream>;
using namespace std;

checking ::checking() {
    Accountnumber = 1111;
    Balance= 0;
    cout <<"\nYour account number is "<< Accountnumber<< " and your intial balance is " <<Balance<<endl;
}
checking::checking(int a, float b) {
    Accountnumber = a;
    Balance = b;
    cout <<"\nYour account number is "<< Accountnumber<< " and your intial balance is " <<Balance<<endl;
}
void checking ::deposit(float depositamount) {
    Balance += depositamount;
    cout <<"you made a deposit for " <<depositamount<<endl;
}

void checking::writecheck(float checkamount) {
    Balance = Balance - checkamount;
    std :: cout <<"you wrote a check for "<< checkamount<<endl;
}

void checking::display() {
    std::cout <<"Ending balance for account # "<<Accountnumber<< " is "<< Balance<<endl;

}





