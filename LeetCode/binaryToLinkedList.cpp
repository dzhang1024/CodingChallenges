class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        ListNode* dummy = head;
        while(dummy -> next != NULL){
            num++;
            dummy = dummy -> next;
        }
        int counter = pow(2, num);
        int conversion = 0;
        while(head != NULL){
            if(head -> val == 1){
                conversion += counter;
            }
            counter /= 2;
            head = head -> next;
        }
        return conversion;
        
    }
};