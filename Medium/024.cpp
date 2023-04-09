# include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode *swapPairs(ListNode *head){
        if(!head || !head->next) return head;
        ListNode *k = head->next;

        head->next = swapPairs(head->next->next);
        k->next = head;

        return k;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode *result = Solution().swapPairs(head);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }

    return 0;
}