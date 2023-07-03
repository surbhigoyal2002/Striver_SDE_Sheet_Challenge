#include <bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    int ans=1;
    int eng=1;
    sort(at,at+n);
    sort(dt,dt+n);
    int i=1;
    int j=0;
    while(i<n&&j<n){
        if(dt[j]>=at[i]){
            eng++;
            i++;
        }
        else{
            eng--;
            j++;
        }
        ans=max(ans,eng);
    }
    return ans;


}
