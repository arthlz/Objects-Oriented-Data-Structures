#include <iostream>

using namespace std;

string s1 = "As time by ...";

string s2 = "goes ";

int main(){


    cout << s1.insert(8, s2) << endl;

    cout << s1.erase(12) << endl;

    cout << s1.replace(3, 4, "Bill") << endl;

    return 0;
}