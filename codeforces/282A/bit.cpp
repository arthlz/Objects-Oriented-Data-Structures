// Apr/21/2026 17:46UTC-3
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int x = 0;

    for (int i=0; i < n; i++){
        string c;
        cin >> c;
        
        if (c == "X++" or c == "++X"){
            x++;
        }
        else{
            x--;
        }
    }

    cout << x;

    return 0;
}