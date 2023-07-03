#include <bits/stdc++.h>
string reverseString(string &str){
	
	stack<string> st;
	str+=" ";
	string s="";
	for(int i=0;i<str.size();i++){
          if (str[i] == ' ' ) {
            if (s!="") {
              st.push(s);
              s = "";
            }
          } 
		  else
            s += str[i];
        }
	string ans="";
	while(st.size()!=0){
		ans+=st.top()+" ";
		st.pop();
	}
	ans.pop_back();
	return ans;
}
