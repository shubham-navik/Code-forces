#include<bits/stdc++.h>
using namespace std;


int cutRibbon(int n,int a[],int dp[]){
    if(n==0)
        return 0;

    int ans = INT_MIN;
    for (int i = 0; i < 3;i++){
        if(n-a[i]>=0){
            int subAns = 0;
            if(dp[n-a[i]]!=-1){
                subAns = dp[n - a[i]];
            }
            else
            subAns = cutRibbon(n - a[i], a,dp);

            if(subAns+1>ans &&subAns != INT_MIN){
                ans = subAns + 1;
                dp[n] = ans;
            }
            // return subAns;
        }
    }
    return dp[n]=ans;
}

int main(){
    int n;
    cin >> n;
    int a[3];
    for (int i = 0; i < 3;i++){
        cin >> a[i];
    }
    int dp[n + 1];
    fill(dp, dp + n + 1, -1);
    dp[0] = 0;
    int ans = cutRibbon(n, a,dp);
    cout << ans;
    //  for(int x:dp){
    //     cout << dp[x] << " ";
    // }
   
}