//
// Created by Lucas Loiacono on 2/11/18.
//

#include "checking.h"
#include <iostream>
#include <iomanip>
using namespace std;


void checking ::openAccount(int a, float b) {
  Accountnumber = a;
  Balance = b;
cout <<"\nYour account number is "<< Accountnumber<< " and your intial balance is " <<Balance<<endl;

}

void checking ::deposit(float depositamount) {
    Balance += depositamount;
    std:: cout <<"you made a deposit for " <<depositamount<<endl;
}
void checking :: writecheck (float checkamount){
    Balance = Balance - checkamount;
    std :: cout <<"you wrote a check for "<< checkamount<<endl;

}
void checking::display() {

    std::cout <<"Ending balance for account # "<<Accountnumber<< " is "<< Balance<<endl;
}


