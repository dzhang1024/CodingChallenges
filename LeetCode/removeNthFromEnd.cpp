class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* offset = head;
        for(int i = 0; i < n; i++){
            fast = fast -> next;
        }
        if(fast == NULL){
            return head -> next;
        }
        while(fast->next != NULL){
            offset = offset -> next;
            fast = fast -> next;
        }
        offset -> next = offset -> next -> next;
        return head;
    }
};