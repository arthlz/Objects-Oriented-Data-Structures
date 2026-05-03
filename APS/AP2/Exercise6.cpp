#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstdlib>

using namespace std;


int main(){
    
    char ch = 'r';

    while (ch == 'r'){
        long sec;
        time(&sec); 
        srand((unsigned) sec); 

        bool achou = false;

        int nmb, numero, count = 0;
        numero = (rand() % 15)+1;

        
        while(!achou and count < 3){
            cin.sync();
            cin.clear();

            cout << "Put a number between 1 and 15: ";
            cin >> nmb;

            if (nmb < numero){
                cout << "Too low" << "\n";
            }
            else if (nmb == numero)
            {
                achou = true;
                break;
            }
            else
            {
                cout << "Too high" << "\n";
            }
            count += 1;
        }
    

    if (achou){
        cout << "Congratulations, you get the number " << numero << " correctly." << endl;
    }
    else{
        cout << "Unfortunately you guessed wrong, the correct number was " << numero  << endl;
    }

    cout << "if you want to repeat the game, press 'r' or press 'e' to exit the game: ";
    cin >> ch;

    do{
        cin.get(ch);
    }

    while(ch != 'r' && ch != 'e');

    }
}

