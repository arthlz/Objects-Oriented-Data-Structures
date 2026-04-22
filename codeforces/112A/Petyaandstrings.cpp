//  Apr/21/2026 22:37UTC-3 
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < a.length(); i++){
        char chara = tolower(a[i]);
        char charb = tolower(b[i]);

        if (chara < charb){
            cout << "-1" << endl;
            return 0;
        }
        else if (chara > charb){
            cout << "1" << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}