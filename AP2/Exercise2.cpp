#include <iostream>

using namespace std;

char ch;
string word;

int main(){
    cout << "Let's go! Press the return key: ";
    cin >> ch;
    cout << "Enter a word containing three characters at most: ";
    cin >> word;

    cout << "Your input: " << ch << " + " << word << endl;

    return 0;
}