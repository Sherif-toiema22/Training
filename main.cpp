#include <bits/stdc++.h>
#define LetsGo ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
//https://codeforces.com/contest/279/problem/B
int main()
{
 LetsGo;
 int x,y;cin>>x>>y;
 int sum=0,arr[y],l=0,r=0,mx=0;
    for (int i = 0; i < x; ++i) {
        cin>>arr[i];
    }
    sum+=arr[l];
 while(r<x) {
     if(sum>y){
         sum-=arr[l];l++;
     }
     else {
         mx = r - l;
         r++;
         sum += arr[r];

     }
 }
 cout<<mx;
 return 0;
}
