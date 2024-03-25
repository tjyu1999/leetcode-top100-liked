class Solution{
public:
    ListNode *swapPairs(ListNode *head){
        if(!head || !head->next) return head;
        
        ListNode *curr = head->next;
        head->next = swapPairs(curr->next);
        curr->next = head;
        
        return curr;
    }
};
