class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = NULL;
        while(head){
            ListNode* store = head -> next; //store next
            head -> next = temp; //add one more number
            temp = head; // make that temp so more can be added on 
            head = store;
        }
        return temp;
    }
};