#include <iostream>
#include <string>

// Usamos std:: para evitar poluir o namespace global em projetos grandes
using namespace std;

// Protótipo: passamos por REFERÊNCIA (&) para modificar a string original
// sem precisar de uma variável global e sem fazer uma cópia lenta.
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