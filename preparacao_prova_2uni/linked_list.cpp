#include <iostream>

using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int d){
    data = d;
    next = nullptr;
  }


};


class LinkedList{
  private:
    Node* head;

  public:
    LinkedList(){
      head = nullptr;
    }

    ~LinkedList(){
      Node* curr = head;

      while (curr != nullptr){
        Node* nextNode = curr->next;
        delete curr;
        curr = nextNode;
      }
      head = nullptr;

    }

    void push_front(int val){
      Node* newNode = new Node(val);
      newNode->next = head;
      head = newNode;

    }

    void push_back(int val){
      
      Node* newNode = new Node(val);

      if (head == nullptr){
        head = newNode;
        return;
      }

      Node* curr = head;
      while (curr->next != nullptr){
        curr = curr->next;
      }

      curr->next = newNode;
    }


    void remove(int val){
      if (head == nullptr) return;

      if (head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return ;
      }

      Node* curr = head;

      while (curr != nullptr && curr->next->data != val){
        curr = curr->next;
      }

      if (curr->next != nullptr){
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
      }

    }

};