#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
        int mini=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
            int cost=prices[i]-mini;
            profit=max(cost,profit);
            mini=min(mini,prices[i]);

        }
        return profit;
}
