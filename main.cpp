#include <bits/stdc++.h>

using namespace std;

const int X=1e6,N=1e2 ;
int coins[N];
int dp[X];
int OO=2e9;
int n,x;
int minCoins(int rem){
    if(rem == 0)return 0;
    if( rem < 0) return OO;

    int &res=dp[rem];
    if(res != -1){
        return res;
    }
    res=OO;
    for (int i = 0; i < n; ++i) {
        res=min(res,minCoins(rem-coins[i])+1);

    }
    return res;
}
int main(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    memset(dp,-1,sizeof dp);

    int res= minCoins(x);
    if(res==OO)
        puts("-1");
    else
        cout<<res;
    return 0;
}
