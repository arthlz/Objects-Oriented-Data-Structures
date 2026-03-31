#include <iostream>
#include <string>

using namespace std;

float x = 10.7F;  // global variable

int main(){

    float &rx = x; // locla reference to x
//    double &ref = x; // 'll give error 'cause it's a different type

    rx *= 2;

    cout << " x = " << x << endl 
         << " rx = " << rx << endl;

    
    const float& cref = x; // Read only reference
    cout << "cref = " << cref << endl; // that's ok

//    ++cref; // Not works, because cref is const

    const string str = "I am a constant string!";
//    str = "That doesn't work"; // Error = string is constatn

 //   string&text = str; // Error = string is constant

    const string&text = str;
    cout << text << endl;

    return 0;
}