void f(int ind,int n,vector<int> &st,vector<vector<int>> &ans,vector<int> &arr,int k){
    if(ind==n){
        if(accumulate(st.begin(),st.end(),0)==k){
            ans.push_back(st);
           
        } return;
    }
    f(ind+1,n,st,ans,arr,k);

    
      st.push_back(arr[ind]); 
      f(ind+1, n, st, ans, arr, k);
      st.pop_back();
    
    
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> st;
    f(0,n,st,ans,arr,k);
    return ans;
}
