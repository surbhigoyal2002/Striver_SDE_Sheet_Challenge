#include <bits/stdc++.h>
class Queue {
    
    
    public:
    stack<int> q1,q2;
    Queue() {
        
    }

    void enQueue(int val) {
        q1.push(val);
    }

    int deQueue() {
        if(q1.empty() && q2.empty())return -1;
        else if (!q2.empty()){
             
        int ans=q2.top();
        q2.pop();
        return ans; 

        } 
        else {
          while (!q1.empty()) {
            q2.push(q1.top());
            q1.pop();
          }
        
    
        int ans=q2.top();
        q2.pop();
        return ans;
        }
    }

    int peek() {
        if(q1.empty() && q2.empty())return -1;
        else if (!q2.empty()){
             
        return q2.top();
       
        

        } 
        else
        {while(!q1.empty()){
            q2.push(q1.top());
            q1.pop();
        }
       return q2.top();
    
      }
    }

    bool isEmpty() {
        if(q1.empty() && q2.empty()) return true;
        else return false;
    }
};
