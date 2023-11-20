#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution{
public:
    int findKthLargest(vector<int>& nums, int k){
        priority_queue<int, vector<int>, greater<int>> pq;

	for(int n : nums){
	    pq.push(n);
	    if(pq.size() > k) pq.pop();
	}

	return pq.top();
    }
};

int main(){
    vector<int> nums;
    int val;
    int k;

    while(cin >> val){
        nums.push_back(val);
	if(cin.get() == '\n') break;
    }
    cin >> k;
    cout << Solution().findKthLargest(nums, k) << endl;
}
