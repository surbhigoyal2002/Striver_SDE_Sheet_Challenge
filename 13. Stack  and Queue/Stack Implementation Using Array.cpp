#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
int *arr;
    int size;
    int tops;
    
    
    Stack(int capacity) {
        size=capacity;
        arr=new int[size];
        tops=-1;
    }

    void push(int num) {
       if(size-tops>1){
           tops++;
           arr[tops]=num;
       }
    }

    int pop() {
      if (tops >= 0 && tops<size) {
          int ans =arr[tops];
        tops--;
        return ans;
      } 
      else
        return -1;
    }
    
    int top() {
        if (tops >= 0 && tops<size) {
          return arr[tops];
        
      } 
      else
        return -1;
    }
    
    int isEmpty() {
        if(tops==-1)return 1;
        else return 0;
    }
    
    int isFull() {
        if(size-tops==1)return 1;
        else return 0;
    }
    
};
