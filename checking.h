//
// Created by Lucas Loiacono on 2/11/18.
//

#ifndef ASSIGNMENTONECHECKIGNACCOUNT_CHECKING_H
#define ASSIGNMENTONECHECKIGNACCOUNT_CHECKING_H


class Checking
{
    int Accountnumber;
    float Balance;

public:
            Checking();
            Checking(int, float);
            void openAccount (int, float);
            void writecheck (float);
            void deposit( float);
            void display ();
};



#endif //ASSIGNMENTONECHECKIGNACCOUNT_CHECKING_H
