#include <iostream>

class Node{
    public:
        int dado;
        Node* next;

        Node(int val){
            dado = val;
            next = nullptr;
        }

};

class cycle{

    public:
        bool hasCycle(Node* head){
            Node* tortoise = head;
            Node* hare = head;

            while(hare != nullptr && hare->next != nullptr){
                hare = hare->next->next;
                tortoise = tortoise->next;

                if (hare = tortoise){
                    return true;
                }
            }
            return false;
        }

};