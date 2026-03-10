#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, nmb;
    cin >> n;
    int total = 0;

    for (int i = 0; i < n ; i++){
        cin >> nmb;
        total += nmb;
    }

    cout << "Average = " << total/n;

    return 0;
}