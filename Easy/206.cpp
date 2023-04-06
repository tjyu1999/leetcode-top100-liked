# include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode *reverseList(ListNode *head){
        ListNode *prev = nullptr;
        ListNode *pos = head;

        while(pos){
            head = head->next;
            pos->next = prev;
            prev = pos;
            pos = head;
        }

        return prev;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *result = Solution().reverseList(head);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }

    return 0;
}