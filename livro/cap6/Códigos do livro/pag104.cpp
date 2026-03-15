#include <iostream>

using namespace std;

int main(){

    float x, y, min;

    cout << "Enter two different numbers: \n";

    if(cin >> x && cin >> y){

        if (x < y){
            min = x;
        }
        else{
            min = y;
        }
        cout << "\n The smaller number between x and y = " << min << endl;
        
    }
    
    else{
        cout << "The input was Invalid" << endl;
    }


    return 0;
}