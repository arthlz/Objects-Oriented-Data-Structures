#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


Node* insert(Node* root, char val) {
    if (root == nullptr) {
        return new Node(val);
    }
    
    // letras menores vão para a esquerda
    if (val < root->data) {
        root->left = insert(root->left, val);
    } 
    // letras maiores vão para a direita
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    
    return root;
}

// 3. Travessia Pre-order (Raiz -> Esquerda -> Direita)
void preOrder(Node* root) {
    if (root == nullptr) return;
    
    // Imprime o nó atual sem espaços
    cout << root->data;
    
    preOrder(root->left);
    preOrder(root->right);
}

// 4. Função auxiliar para liberar a memória da árvore
void freeTree(Node* root) {
    if (root == nullptr) return;
    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

int main() {

    string line;
    vector<string> lines;

    while (cin >> line) {
        
      if (line == "*" || line == "$") {
            Node* root = nullptr;

            // Loop for de trás pra frente
            for (int i = lines.size() - 1; i >= 0; --i) {
                for (char c : lines[i]) {
                    root = insert(root, c);
                }
            }

            preOrder(root);
            cout << "\n";

            freeTree(root);
            lines.clear();
            
            if (line == "$") {
                break;
            }
        } 
        // Se for texto normal, as folhas acumulam
        else {
            lines.push_back(line);
        }
    }

    return 0;
}