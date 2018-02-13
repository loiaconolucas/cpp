//
// Created by Lucas Loiacono on 2/11/18.
//

#ifndef CHECKING_ACCOUNT_WITH_CONSTRUCTORS_CHECKING_H
#define CHECKING_ACCOUNT_WITH_CONSTRUCTORS_CHECKING_H


class checking {
    int Accountnumber;
    int Balance;

public:
    checking();
    checking (int a, float b);
    void writecheck (float);
    void deposit (float);
    void display ();


};


#endif //CHECKING_ACCOUNT_WITH_CONSTRUCTORS_CHECKING_H
