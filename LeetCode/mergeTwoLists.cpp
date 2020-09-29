class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        }
        else if(l2 == NULL){
            return l1;
        }
        ListNode* head = NULL;
        if(l1 -> val < l2 -> val){
            head = l1;
            l1 = l1 -> next; //once head has been assigned move up the current node
        }
        else{
            head = l2;
            l2 = l2 -> next;
        }
        ListNode* pointer = head; //pointer to the head so we can add things
        while(l1 && l2){ //while the nodes are not null, we compare which one is smaller and add it to next
            if(l1 -> val < l2 -> val){
                pointer -> next = l1;
                l1 = l1 -> next;
            }
            else{
                pointer -> next = l2;
                l2 = l2 -> next;
            }
            pointer = pointer -> next;
        }
        if(l1){ //if there are still nodes left add it to the end
            pointer -> next = l1;
        }
        else{
            pointer -> next = l2;
        }
        return head;
        
    }
};