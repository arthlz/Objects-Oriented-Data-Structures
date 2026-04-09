#include <iostream>
#include <math.h>
#include <string>


using namespace std;

double n1, n2;

inline double Max(double x, double y){
    return (x < y ? y : x);
}

inline char Max(char x, char y){
    return (x < y ? y : x);
}

int main(){

    cout << "let's test some example of codes:" << endl;

    char charuto1 = 'AD';
    char charuto2 = 'B';

    cout << "print the greater term between charuto1 and charuto2: " << Max(charuto1, charuto2) << endl;

    n1 = 1234;
    n2 = 1013;

    cout << "print the greater term between n1 and n2: " << Max(n1, n2) << endl;

}