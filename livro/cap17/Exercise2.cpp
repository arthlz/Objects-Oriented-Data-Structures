#include <iostream>

using namespace std;

int maxlen = 80;

int main(){

    char line[maxlen], *p;

    cout << "Enter a line of text" << endl;

    for ( p = line; p < line+maxlen && cin.get(*p) && *p != '\n'; p++);

    while (--p >= line){
        cout << *p;
    }

    cout << endl;

    return 0;
}