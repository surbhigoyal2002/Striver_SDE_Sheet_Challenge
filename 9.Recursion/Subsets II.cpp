#include <bits/stdc++.h> 
void f(int ind,int n,vector<int> &arr,vector<vector<int>> &ans,vector<int>& st){
    
        ans.push_back(st);
        
    for(int i=ind;i<n;i++){
        if(i!=ind && arr[i]==arr[i-1])continue;
        st.push_back(arr[i]);
        f(i+1,n,arr,ans,st);
        st.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
        vector<int> st;
        sort(arr.begin(),arr.end());
        f(0,n,arr,ans,st);
        return ans;
}
