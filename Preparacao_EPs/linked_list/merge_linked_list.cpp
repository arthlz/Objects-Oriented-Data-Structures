#include <iostream>

class Node{

    public:
        int val;
        Node* next;

        Node(int val){
            val = val;
            next = nullptr;
        }
};

Node* mergeTwoLists(Node* list1, Node* list2){
    Node dummy(0);
    Node* ptr = &dummy;

    while (list1 != nullptr && list2 != nullptr){
        if (list1->val <= list2->val){
            ptr->next = list1;
            list1 = list1->next;
        }else{
            ptr->next = list2;
            list2 = list2->next;
        }

        ptr = ptr->next;

    }

    
    


}