#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
   int n=start.size();
   vector<int> ans;
   vector<pair<int,int> > mp(n);
   for(int i=0;i<n;i++){
       mp[i].first=end[i];
       mp[i].second=i+1;
   }
   sort(mp.begin(),mp.end());
   ans.push_back(mp[0].second);
   int prev=mp[0].first;
   for(int i=1;i<n;i++){
       if(start[mp[i].second-1]>prev){
           ans.push_back(mp[i].second);
           prev=mp[i].first;
       }
   }
   return ans;

}
