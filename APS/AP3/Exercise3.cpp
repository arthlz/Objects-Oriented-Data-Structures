#include <iostream>

using namespace std;

long double factorialRecursive(unsigned int n) {
    // Caso base: 
    if (n == 0 || n == 1) {
        return 1.0;
    }
    // Recursão:
    return n * factorialRecursive(n - 1);
}

int main(){

    unsigned int number = 0, n = 1, n1, n2, numb_recursao;

    cout << "Give a number to calculate the factorial: ";
    cin >> number;

    n1 = number;
    n2 = number;

    // For loop
    for(unsigned int i = 0; i <= n1+1; i++){ // loop normal
        n *= number;
        n1 -= 1;
        number -= 1;
    }

    // Recursão
    numb_recursao = factorialRecursive(n2);


    cout << "The factorial using for loop is: " << n << endl;
    cout << "The factorial using recursion is: " << numb_recursao << endl;

    return 0;
}
