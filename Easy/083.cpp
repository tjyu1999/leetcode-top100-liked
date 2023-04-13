# include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode *deleteDuplicates(ListNode *head){
        if(!head || !head->next) return head;
        ListNode *pos = head;

        while(pos && pos->next){
            if(pos->val == pos->next->val) pos->next = pos->next->next;
            else pos = pos->next;
        }

        return head;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(1);

    ListNode *result = Solution().deleteDuplicates(head);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }

    return 0;
}