#include <iostream>
#include <string>

using namespace std;

void cutline(string& s);

int main() {
    string line;

    // O getline retorna o fluxo, o que permite usar como condição de parada
    while (getline(cin, line)) {
        
        // Passamos 'line' como argumento
        cutline(line); 
        
        cout << "Resultado: " << line << endl;
    }

    return 0;
}

// Implementação da função
void cutline(string& s) {
    if (!s.empty()) {
        s.pop_back(); 
    }
}