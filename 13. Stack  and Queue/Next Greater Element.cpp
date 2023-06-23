#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    stack<int> st;
    vector<int> ans(n);
    
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
         st.push(-1);
        while(!st.empty()&&curr>=st.top()){
            st.pop();
        }
        if(st.empty())ans[i]=-1;
        else ans[i]=st.top();
        st.push(curr);
    }
    return ans;

}
