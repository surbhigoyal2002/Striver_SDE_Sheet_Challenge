#include <bits/stdc++.h> 
class Queue {
public:
int *arr;
    int size;
    int fronts;
    int rear;
    
    
    Queue() {
        size=10000;
        arr=new int[size];
       fronts=0;
       rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(fronts==rear)return true;
        else return false;
    }

    void enqueue(int data) {
      arr[rear]=data;
      rear++;
    }

    int dequeue() {
       if(fronts==rear)return -1;
       else{
           int ans=arr[fronts];
           arr[fronts]=-1;
           fronts++;
           return ans;
       }
    }

    int front() {
        if(fronts==rear)return -1;
       else{
           int ans=arr[fronts];
           
           return ans;
       }
    }
};
