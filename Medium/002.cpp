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
        int a;
        int b;
        int carry = 0;

        while(l1 || l2 || carry){
            if(l1 == nullptr) a = 0;
            else a = l1->val;
            if(l2 == nullptr) b = 0;
            else b = l2->val;

            int val = a + b;
            carry = val / 10;
            record->next = new ListNode(val % 10);

            if(l1 != nullptr) l1 = l1->next;
            else l1 = nullptr;
            if(l2 != nullptr) l2 = l2->next;
            else l2 = nullptr;
        }        
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
