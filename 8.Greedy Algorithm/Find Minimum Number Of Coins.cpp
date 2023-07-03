#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
   int ans=0;
   int den[]={1000,500,100,50,20,10,5,2,1};
   for(int i=0;i<9;i++){
       ans+=amount/den[i];
       amount=amount%den[i];
   }
   return ans;
}
