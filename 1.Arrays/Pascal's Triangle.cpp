#include <bits/stdc++.h>
vector<long long int> row(int &numRows){

        vector<long long int> res;
        long long int ans=1;
        res.push_back(1);
        for(int i=1;i<numRows;i++){
            ans=ans*(numRows-i);
            ans=ans/i;
            res.push_back(ans);
        }
        return res;
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> mat;
       for(int i=1;i<=n;i++){
           mat.push_back(row(i));
       }
       return mat;
}
