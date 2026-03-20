#include <iostream>

using namespace std;

int main(){

    unsigned int number = 0, n = 1, n1, n2;

    cout << "Give a number to calculate the factorial: ";
    cin >> number;

    n1 = number;
    n2 = number;

    for(int i = 0; i <= n1+1; i++){ // loop normal
        n *= number;
        n1 -= 1;
    }


    cout << "The factorial is " << n << endl;


    return 0;
}
