class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* time2 = head;
        ListNode* time1 = head;

        while (time1 != nullptr && time1->next != nullptr){
            time1= time1->next->next;
            time2 = time2->next;

            if (time1==time2){
                return true;
            }
        }

        return false;
    }
};