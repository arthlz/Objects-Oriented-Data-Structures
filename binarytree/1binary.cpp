#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node{

    int data;
    Node* right;
    Node* left;

    Node(int v) {
      this->data = v;
      this->right = nullptr;
      this->left = nullptr;
    };
};

// Função de inserção do elemento
Node* insert(Node* root, int val) {
 
    if (root == nullptr) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } 
    else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Pre-order: Raiz -> Esquerda -> Direita
void preOrder(Node* root, vector<int>& result) {
    if (root == nullptr) return;
    result.push_back(root->data);
    preOrder(root->left, result);
    preOrder(root->right, result);
}

// In-order: Esquerda -> Raiz -> Direita
void inOrder(Node* root, vector<int>& result) {
    if (root == nullptr) return;
    inOrder(root->left, result);
    result.push_back(root->data);
    inOrder(root->right, result);
}

// Post-order: Esquerda -> Direita -> Raiz
void postOrder(Node* root, vector<int>& result) {
    if (root == nullptr) return;
    postOrder(root->left, result);
    postOrder(root->right, result);
    result.push_back(root->data);
}

// Função pra imprimir com a formatação pedida
void printTraversal(const string& prefix, const vector<int>& result) {
    cout << prefix;
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        // Imprime o espaço apenas se NÃO for o último elemento
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << "\n";
}


// inspirado no galego em c++
int main() {
    int n;
    if (cin >> n) {
        Node* root = nullptr;
        
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            root = insert(root, val);
        }

        vector<int> pre, in, post;
        
        preOrder(root, pre);
        inOrder(root, in);
        postOrder(root, post);

        // o pre-order
        printTraversal("Pre order : ", pre);
        
        // O in order
        printTraversal("In order  : ", in);
        
        // o postorder
        printTraversal("Post order: ", post);
    }

    return 0;
}