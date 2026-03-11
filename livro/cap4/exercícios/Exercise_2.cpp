// O exercício 1 é um exercício respondido anteriormente

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x1 = 0.123456;
    double x2 = 23.987;
    double x3 = -123.456;

    cout << left << setw(15) << x1 << "\n";
    cout << fixed << setprecision(2) << setw(12) << right << x2 << endl;
    cout << scientific << setprecision(4) << setw(10) << x3;

    return 0;
}