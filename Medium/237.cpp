# include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    void deleteNode(ListNode *node){
        if(!node) return;
        if(!node->next) delete node;

        node->val = node->next->val;
        ListNode *del = node->next;
        node->next = del->next;
        delete del;
    }
};

int main(){
    ListNode *head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);
    ListNode *node = head->next; 

    Solution().deleteNode(node);
    while(head != nullptr){
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}