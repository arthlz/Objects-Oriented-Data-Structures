#include <iostream>
#include <vector>

using namespace std;

// Função hash: h(k) = k mod 10
int hashFunction(int k) {
    return k % 10;
}

int main() {
    // Otimização para leitura e escrita rápida no C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Tabela de dispersão com 10 entradas (array de vetores)
    vector<int> hashTable[10];

    // Leitura e inserção dos elementos
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        int index = hashFunction(v);
        hashTable[index].push_back(v);
    }

    // Impressão da tabela
    for (int i = 0; i < 10; ++i) {
        cout << i;
        for (int val : hashTable[i]) {
            cout << " " << val;
        }
        cout << "\n";
    }

    return 0;
}