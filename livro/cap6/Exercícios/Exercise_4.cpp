#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){

    int number, attempt;
    char wb = 'r';
    long sec;
    time ( &sec);
    srand((unsigned)sec);

    cout << " ***** Numeric game ***** " << endl;
    cout << "\n\nRules: "<< endl;

    while (wb=='r'){
        cout << "Try to write a number between 1 and 15 ";
        cout << "\nYou'll have 3 chances, good luck!\n "<< endl;
        
        number = ((rand() % 15) + 1);
        bool found = false;
        int count = 0;

        while(!found && count < 3){
            cin.sync();
            cin.clear();

            cout << ++count << "° Attempt: ";
            cin >> attempt;

            if (attempt<number){
                cout << "too small!\n" << "\n";
            
            }

            else if(attempt>number){
                cout << "too big\n" << "\n";
            }
            
            else{
                found = true;
            }
        }
        if (!found){
            cout << "I won, try again next time! " << endl;
            cout << "The number were: " << number << endl;
            
        }

        else{
            cout << "Congratulations, you won" << endl;
            cout << "You answered correctly the number " << number << endl;

        }
        
        cout << "Repeat -> <r> or Finish -> <f>\n";
        do{
            cin.get(wb);
        }
        
        while (wb!= 'r' && wb != 'f');
        

    }


    return 0;
}