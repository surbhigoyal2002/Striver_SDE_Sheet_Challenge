#include <bits/stdc++.h>
void f(int ind, int n,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &st){
	if(target==0){
		ans.push_back(st);
		return;
	}
	for(int i=ind;i<n;i++){
  if (i > ind && arr[i] == arr[i - 1])
    continue;
  if (arr[i] > target)
    break;
  st.push_back(arr[i]);
  f(i + 1, n, target - arr[i], arr, ans, st);
  st.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	vector<int> st;
	f(0,n,target,arr,ans,st);
	return ans;
}
