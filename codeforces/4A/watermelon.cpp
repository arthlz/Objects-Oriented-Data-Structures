//  Apr/16/2026 16:15UTC-3 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0){
        cout << "YES" << endl;

    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}