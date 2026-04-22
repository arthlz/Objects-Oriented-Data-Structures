// Apr/21/2026 22:46UTC-3 
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string c;
    cin >> c;

    char out = toupper(c[0]);

    c.replace(0, 1, 1, out);

    cout << c << endl;
    return 0;
}

/*
Another solution:

string c;
cin >> c;

c[0] = toupper(c[0])

cout << c << endl;

*/