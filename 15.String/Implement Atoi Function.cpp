#include <bits/stdc++.h> 
int atoi(string str) {
    int n=str.size();
    if(str.empty())return 0;
    else {
        string s="";
     for(int i=0;i<n;i++){
         if(str[i]=='-'||(str[i]-'0'>=0 && str[i]-'0'<=9)){
             s+=str[i];
         }
     }
      int ans = stoi(s);
      return ans;
    }
}
