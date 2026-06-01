class ListNode{
    public:
        int val;
        ListNode *next;

        ListNode(int val){
            val = val;
            next = nullptr;
        }

};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 != nullptr && list2 != nullptr){
            if (list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            } else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if (list1 != nullptr){
            tail->next = list1;
        }else{
            tail->next = list2;
        }

        return dummy.next;

    }
};


