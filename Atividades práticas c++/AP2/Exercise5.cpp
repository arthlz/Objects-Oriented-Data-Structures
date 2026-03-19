#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){

    int nmb, random_nmb;

    cout << "Give me a integer between 0 and 65535: ";
    cin >> nmb;

    srand(nmb);

    for (int i = 0; i <= 20; ++i){

        random_nmb = (rand() % 100) + 1;
        cout << random_nmb << endl;

    }



    return 0;
}