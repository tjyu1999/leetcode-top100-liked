# include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode * list2){
        if(list1 == nullptr && list2 == nullptr) return nullptr;
        else if(list1 == nullptr) return list2;
        else if(list2 == nullptr) return list1;

        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

int main(){
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode *result = Solution().mergeTwoLists(list1, list2);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }

    return 0;
}