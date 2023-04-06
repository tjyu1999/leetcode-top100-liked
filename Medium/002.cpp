# include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
        ListNode *record = new ListNode(0);
        ListNode *curr = record;
        int carry = 0;

        while(l1 || l2 || carry){
            int a = l1 ? l1->val : 0;
            int b = l2 ? l2->val : 0;
            int val = a + b + carry;
            carry = val / 10;

            curr->next = new ListNode(val % 10);
            curr = curr->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        return record->next;
    }
};

int main(){
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode *result = Solution().addTwoNumbers(l1, l2);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }

    return 0;
}
