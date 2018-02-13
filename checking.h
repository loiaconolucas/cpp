//
// Created by Lucas Loiacono on 2/11/18.
//

#ifndef ACCOUNTMANAGER_CHECKING_H
#define ACCOUNTMANAGER_CHECKING_H


class checking {

        int Accountnumber;
        float Balance;

    public:

        void openAccount (int, float);
        void writecheck (float);
        void deposit( float);
        void display ();


};


#endif //ACCOUNTMANAGER_CHECKING_H
