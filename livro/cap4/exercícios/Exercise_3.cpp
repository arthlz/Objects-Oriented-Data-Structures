#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    long article = 0;
    float quantity = 0;
    float price = 0;

    cout << "Please insert an article number: ";
    cin >> article;

    cout << "\nPlease insert a quantity: ";
    cin >> quantity;

    cout << "\nPlease insert a unit price: ";
    cin >> price;

    cout << left << setw(15) << "The article number is: " << article << endl;
    cout << fixed << setprecision(2) << right << setw(12) << "The quantity is: " << quantity << endl;
    cout << scientific << setprecision(4) << setw(10) << "The price is: " << price << endl;

    return 0;
}