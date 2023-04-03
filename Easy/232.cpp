# include<iostream>
# include<stack>
using namespace std;

class MyQueue{
public:
    MyQueue(){
        
    }
    
    void push(int x){
        stack<int> tmp;
        while(!stk.empty()){
            tmp.push(stk.top());
            stk.pop();
        }

        stk.push(x);
        while(!tmp.empty()){
            stk.push(tmp.top());
            tmp.pop();
        }
    }
    
    int pop(){
        int val = stk.top();
        stk.pop();

        return val;
    }
    
    int peek(){
        return stk.top();
    }
    
    bool empty(){
        return stk.empty();
    }

private:
    stack<int> stk;
};

int main(){
    MyQueue que;
    que.push(1);
    que.push(2);
    
    cout << que.pop() << endl;
    cout << que.peek() << endl;
    cout << que.empty() << endl;
}