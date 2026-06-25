#include <iostream>
#include <vector>
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

};

void preOrder(Node* root, vector<int>& result){
  if (root == nullptr) return;
  
  result.push_back(root->data);
  preOrder(root->left, result);
  preOrder(root->right, result);
}

void inOrder(Node* root, vector<int>& result){
  if (root == nullptr) return;
  inOrder(root->left, result);
  result.push_back(root->data);
  inOrder(root->right, result);
}

void postOrder(Node* root, vector<int>& result){
  if (root == nullptr) return;
  
  postOrder(root->left, result);
  postOrder(root->right, result);
  result.push_back(root->data);

}


int main(){
  int casos;
  vector<int> result;
  Node* root = nullptr;

  while (casos--){
    string line;

    cin >> line;

    if (line == "insert"){
      int ln;
      cin >> ln;
      insert(root, ln);
    }

    else if (line == "pre"){
      preOrder(root, result);
    }
    else if (line == "in"){
      inOrder(root, result);
    }
    else if (line == "post"){
      postOrder(root, result);
    }
  

  }

  return 0;
}