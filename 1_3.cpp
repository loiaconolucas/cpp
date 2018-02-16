#include <iostream>
#include "checking.h"
using namespace std;


int main() {
    Checking accounts [5];
    accounts[0] = Checking();
    //account1.openAccount (2345, 1500);
    accounts[0].writecheck(835);
    accounts[0].writecheck(284);
    accounts[0].deposit(1450);
    accounts[0].display();

     accounts[1]= Checking(9876, 4200);

   // account2.openAccount (9876, 4200);
    accounts[1].deposit(720);
    accounts[1].writecheck(2279);
    accounts[1].display();

}

