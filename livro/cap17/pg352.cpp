#include <iostream>

using namespace std;

int arr[4] = {0,10,20,30};

int main(){
    cout << "\nAdress and value of array elements:\n" << endl;

    for (int i = 0; i < 4; i++){
        cout << "Address: " << (void *) (arr+i) // or &arr[i] 
        << "\nValue: " << *(arr+i) << endl;
    }
}