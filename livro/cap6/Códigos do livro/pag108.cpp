#include <iostream>

using namespace std;

int main(){

    float x, y;

    cout << "Type two different numbers: \n";

    if (!(cin >> x && cin >> y)){
        cout << "\n Invalid input" << endl;
    }
    else{
        cout << "\nThe greater value between x and y is: "
             << (x>y ? x: y) << endl;
             
    }
    return 0;
}