#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    vector<int> scores(n);

    int out = 0;

    for (int i = 0; i < n; i++){
        cin >> scores[i];

    }

    for (int i = 0; i < n; i++){
        if (scores[i] >= scores[k-1] && scores[i] > 0){
            out++;
        }
    }

    cout << out << endl;;


    return 0;
}