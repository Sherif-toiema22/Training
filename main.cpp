#include <bits/stdc++.h>

using namespace std;

int const OO = 2e9;
int const N = 1e6 + 1;
int n, coins[N], dp[N];

//int rec(int rem) {
//    if (rem == 0) {
//        return 0;
//    }
//
//    if (rem < 0) {
//        return OO;
//    }
//
//    int &res = dp[rem];
//    if (res != -1) {
//        return res;
//    }
//
//    res = OO;
//
//    int tmp = rem;
//    while(tmp != 0) {
//        res = min(res, rec(rem - (tmp % 10)) + 1);
//        tmp /= 10;
//    }
//
//    return res;
//}
int i=10;
int DIF(int rem,int i){
    if(rem == 0){
        return 0;
    }
    if (rem < 0) {
        return OO;
    }

    int &res = dp[rem];
    if(res != -1){
        return res;
    }
    res=OO;
    int op1 = DIF(rem-rem%i , i*10);
    int op2 = DIF(rem , i*10);
    return min(op1, op2);
}

int main() {
    scanf("%d", &n);

    memset(dp, -1, sizeof dp);

    printf("%d\n", DIF(n,10));

    return 0;
}
