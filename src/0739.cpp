class Solution{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures){
        vector<int> res(temperatures.size());
        stack<int> st;
        
        for(int i = 0; i < temperatures.size(); i++){
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                const int index = st.top();
                st.pop();
                res[index] = i - index;
            }
            st.push(i);
        }
        
        return res;
    }
};
