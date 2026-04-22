//  Apr/16/2026 16:32UTC-3 

#include <bits/stdc++.h>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int nmb;
    cin >> nmb;

    for (int i = 0; i < nmb; i++){
        string s;
        cin >> s;
        
        int len = s.length();
        if (len > 10){
            cout << s[0] << len - 2 << s[len-1] << endl;
        }
        else{
            cout << s << endl;
        }

    }

    return 0;
}