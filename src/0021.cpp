#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        if(!list1 && !list2) return nullptr;
        else if(!list1) return list2;
        else if(!list2) return list1;
        
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
    int val;
    
    ListNode* list1 = new ListNode(val);
    ListNode* list2 = new ListNode(val);
    ListNode* tmp;
    
    tmp = list1;
    while(cin >> val){        
        tmp->next = new ListNode(val);
        tmp = tmp->next;
        if(cin.get() == '\n') break;
    }
    
    tmp = list2;
    while(cin >> val){        
        tmp->next = new ListNode(val);
        tmp = tmp->next;
        if(cin.get() == '\n') break;
    }

    ListNode* res = Solution().mergeTwoLists(list1->next, list2->next);
    while(res){
        cout << res->val << endl;
        res = res->next;
    }
}
