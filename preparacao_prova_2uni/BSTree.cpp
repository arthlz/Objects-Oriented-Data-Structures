#include <iostream>

struct BstNode{
  int data;
  BstNode* left;
  BstNode* right;

  BstNode(int v){
    data = v;
    left = nullptr;
    right = nullptr;
  }
};

class BST{

  private:
    BstNode* root;

    BstNode* insertHelper(BstNode* rt, int val){
      if (rt == nullptr){
        return new BstNode(val);
      }

      if (val< rt->data){
        rt->left = insertHelper(rt->left, val);
      }else{
        rt->right = insertHelper(rt->right, val);
      }

      return rt;

    }

    bool findHelper(BstNode* rt, int val){
      if (rt==nullptr){
        return false;
      }
      if (rt->data == val){
        return true;
      }
      if (val < rt->data){
        return findHelper(rt->left, val);
      }else{
        return findHelper(rt->right, val);
      }
      
    }
    void clear(BstNode* rt){
      if (rt != nullptr){
        clear(rt->left);
        clear(rt->right);
        delete rt;      
      }
    }

  public:
    BST(){
      root = nullptr;
    }
    ~BST(){
      this->clear(root);
    }

    void insert(int val){
      root = this->insertHelper(root, val);
    }

    bool find(int val){
      return findHelper(root, val);
    }


};