class ListNode{
    public:
        int dado;
        ListNode *next;

        ListNode(int val){
            dado = val;
            next = nullptr;
        }

};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *current = head;
        ListNode *futureptr = nullptr;

        while (current != nullptr){
            futureptr = current->next;
            current->next = prev;
            prev = current;
            current = futureptr;
        }

        return prev;
    }
};