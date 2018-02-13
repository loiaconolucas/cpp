#include <iostream>
#include"checking.h"
using namespace std;


int main() {
    checking account1;
    account1.writecheck(835);
    account1.writecheck(284);
    account1.deposit(1450);
    account1.display();

    checking account2 = checking(9876,4200);
    account2.deposit(720);
    account2.writecheck(2279);
    account2.display();
}