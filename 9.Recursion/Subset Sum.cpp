#include <bits/stdc++.h>
void f(int ind,int sum,int n,vector<int> &ans,vector<int> &num){
    if(ind==n){
		ans.push_back(sum);
		return;
	}
	f(ind+1,sum,n,ans,num);
	f(ind+1,sum+num[ind],n,ans,num);

}
vector<int> subsetSum(vector<int> &num){
	int n=num.size();
	vector<int> ans;
	f(0,0,n,ans,num);	
	sort(ans.begin(),ans.end());
	return ans;
}
