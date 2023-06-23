#include <bits/stdc++.h> 
class Stack {
	queue<int> q;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
       return q.size();
    }

    bool isEmpty() {
        if(q.empty())return true;
        else return false;
    }

    void push(int element) {
        int s=q.size();
        q.push(element);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if(!q.empty())
        {int ans=q.front();
        q.pop();
        return ans;}
        else return -1;
    }

    int top() {
        if(!q.empty())
        return q.front();
        
        else return -1;
    }
};
