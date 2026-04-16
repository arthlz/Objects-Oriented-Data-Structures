#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, petya, vasya, tonya, out(0);
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2){
            out ++;
        }
    }

    cout << out << endl;
    return 0;
}