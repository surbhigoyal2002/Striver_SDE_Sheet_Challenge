#include <bits/stdc++.h>
int romanToInt(string s) {
    map<char,int> mp;
    int ans=0;
    int n=s.size();
    mp.insert({'I',1});
    mp.insert({'V',5});
    mp.insert({'X',10});
    mp.insert({'L',50});
    mp.insert({'C',100});
    mp.insert({'D',500});
    mp.insert({'M',1000});
    for(int i=0;i<n;i++){
        if(mp[s[i]]<mp[s[i+1]]){
            ans-=mp[s[i]];
        }
        else ans+=mp[s[i]];
    }
    return ans;
}
