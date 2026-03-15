#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
    int seed = 0;

    cout << "Please give me a number between 0 and 65535: ";
    cin >> seed;

    srand(seed);

    for(int i = 0; i <= 20; ++i){
        cout << setw(4) << setprecision(2) << "Random number = " 
             << (rand() % 100 + 1) << endl;
    }



    return 0;
}