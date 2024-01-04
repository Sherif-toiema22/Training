#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define sc second
#define fr first
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tt int t;cin>>t;
#define True(b) cout<<(b?"YES\n":"NO\n")
#define LetsGo ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
 LetsGo;
 int t=1;
 while(t--)
 {
     int n,k;
     cin>>n>>k;
     ll a[n+1],pre[n+1]={},ans=0;
     int t[n+1];
     for(int i=1;i<=n;i++)
         cin>>a[i];
     for(int i=1;i<=n;i++)
        cin>>t[i];
     for(int i=1;i<=n;i++)
     {
         if(!t[i])
            pre[i]+=a[i];
         else
            ans+=a[i];
         pre[i]+=pre[i-1];
     }
     ll mx=0;
     for(int i=k;i<=n;i++)
         mx=max(mx,pre[i]-pre[i-k]);
     cout<<ans+mx;
     cout<< '\n';//solve
 }
 return 0;
}
