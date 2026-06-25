#include <iostream>
#include <string>

using namespace std;

struct Node{
  Node* left;
  Node* right;
  int data; 

  Node(int d){ 
    this->left = nullptr;
    this->right = nullptr;
    this->data = d;
  }
};

Node* insert(Node* root, int val){ 
  if (root == nullptr){ 
    return new Node(val);
  }

  if (val < root->data){
    root->left = insert(root->left, val);
  }

  else if (val >= root->data){ 
    root->right = insert(root->right, val);
  }

  return root;
}

void preOrder(Node* root){
  if (root == nullptr) return;
  
  cout << root->data << " "; 
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node* root){
  if (root == nullptr) return;
  
  inOrder(root->left);
  cout << root->data << " "; 
  inOrder(root->right);
}

void postOrder(Node* root){
  if (root == nullptr) return;
  
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " "; 
}


int main(){
  int casos;
  
  cin >> casos; 

  Node* root = nullptr; 

  while (casos--){
    string command;
    cin >> command;

    if (command == "insert"){
      int val; 
      cin >> val;
      root = insert(root, val); 
    }
    else if (command == "pre"){
      preOrder(root);
      cout << endl; 
    }
    else if (command == "in"){
      inOrder(root);
      cout << endl;
    }
    else if (command == "post"){
      postOrder(root);
      cout << endl;
    }
  }

  return 0;
}