# include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n){
        ListNode *a = head;
        ListNode *b = head;

        for(int i=0; i<n; i++) a = a->next;
        if(!a) return head->next;
        
        for(; a->next; a=a->next) b = b->next;
        b->next = b->next->next;

        return head;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int n = 2;

    ListNode *result = Solution().removeNthFromEnd(head, n);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }

    return 0;
}