#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum State { EMPTY, OCCUPIED, DELETED };

struct Entry {
    string key;
    State state;
    
    Entry() {
        key = "";
        state = EMPTY;
    }
};

int hashFold(const string& s, int m) {
    long long sum = 0;
    for (char c : s) {
        sum += c; // 
    }
    return sum % m;
}

int main() {
    // Otimização de I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    if (!(cin >> m)) return 0;

    vector<Entry> table(m);

    string cmd, x;
    while (cin >> cmd && cmd != "fim") {
        cin >> x;

        if (cmd == "add") {
            int idx = hashFold(x, m);
            
            while (table[idx].state == OCCUPIED) {
                idx = (idx + 1) % m;
            }
            
            table[idx].key = x;
            table[idx].state = OCCUPIED;
        } 
        else if (cmd == "sch") {
            int idx = hashFold(x, m);
            int start_idx = idx;
            int found_idx = -1;
            
            while (table[idx].state != EMPTY) {
                if (table[idx].state == OCCUPIED && table[idx].key == x) {
                    found_idx = idx;
                    break;
                }
                idx = (idx + 1) % m;
                
                // Prevenção de loop infinito caso a tabela esteja cheia
                if (idx == start_idx) break; 
            }
            cout << x << " " << found_idx << "\n";
        } 
        else if (cmd == "rmv") {
            int idx = hashFold(x, m);
            int start_idx = idx;
            
            while (table[idx].state != EMPTY) {
                if (table[idx].state == OCCUPIED && table[idx].key == x) {
                    table[idx].state = DELETED; // Marca como removido (Tombstone)
                    break;
                }
                idx = (idx + 1) % m;
                if (idx == start_idx) break;
            }
        }
    }

    return 0;
}