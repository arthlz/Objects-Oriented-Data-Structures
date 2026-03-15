#include <iostream>

using namespace std;

int main(){

    float limit, speed, toofast;

    cout << "\nSpeed limit: " << endl;
    cin >> limit;

    cout << "\n" << "Speed: ";
    cin >> speed;

    toofast = speed - limit;

    if (toofast <= 10){
        cout << "You were lucky!" << endl;
    }

    else if(toofast < 20){
        cout << "Fine payable: 40 Dollars" << endl;
    }

    else if(toofast < 30){
        cout << "Payable 80 bucks" << endl;
    }
    else{
        cout << "Hand over your driver's license bro" << endl;
    }



    return 0;
}