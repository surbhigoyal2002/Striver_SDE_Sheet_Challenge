#include <bits/stdc++.h> 
int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n=start.size();
   int ans=1;
   vector<pair<int,int> > mp(n);
   for(int i=0;i<n;i++){
       mp[i].first=finish[i];
       mp[i].second=start[i];
   }
   sort(mp.begin(),mp.end());
   
   int prev=mp[0].first;
   for(int i=1;i<n;i++){
       if(mp[i].second>=prev){
           ans++;
           prev=mp[i].first;
       }
   }
   return ans;

}
