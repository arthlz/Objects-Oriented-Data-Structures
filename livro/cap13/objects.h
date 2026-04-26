#ifndef _OBJECTS_
#define _OBJECTS_

#include <iostream>
#include <string>

using namespace std;


class Account{
    public:
        string name;
        unsigned long nr;
        double balance;

        void display(){
            cout << "Holder: " << name << "\nBalance: " << balance << "\n";
        }

};

#endif