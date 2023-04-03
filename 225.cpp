# include<iostream>
# include<queue>
using namespace std;

class MyStack{
public:
    MyStack(){
        
    }
    
    void push(int x){
        q.push(x);

        for(int i=0; i<q.size()-1; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop(){
        int val = q.front();
        q.pop();

        return val;
    }
    
    int top(){
        return q.front();
    }
    
    bool empty(){
        return q.empty();
    }

private:
    queue<int> q;
};

int main(){
    MyStack stk;
    stk.push(1);
    stk.push(2);
    
    cout << stk.pop() << endl;
    cout << stk.top() << endl;
    cout << stk.empty() << endl;
}
