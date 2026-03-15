#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    long euro, maxEuro;
    double rate;

    cout << "\n *** Table of Exchange "
         << " Euro - US$ ***\n\n";

    cout << "Give the rate of exchange: (Euro-U$$) ";

    cin >> rate;

    cout << "\nPlease enter the maximum euro: ";
    cin >> maxEuro;

    cout << "\n" << setw(12) << "Euro" << setw(20) << "U$$"
         << "\t\tRate: " << rate << endl;

    cout << fixed << setprecision(2) << endl;

    long lower, upper, step;

    lower = 1, step = 1;

    while (lower <= maxEuro){

        euro = lower;
        upper = step*10;

        while(euro <= upper && euro <= maxEuro){
            cout << setw(12) << euro << setw(20) << euro * rate << endl;
            euro += step;
        }
        
        step *= 10, lower = 2*step;
    }




    return 0;
}