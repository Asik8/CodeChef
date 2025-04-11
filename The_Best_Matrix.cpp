#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,m;
    cin >> n>>m;
    ll a[n][m];
    vec(int)df={1,-1};
    ll ans=n*m;
    fl(i,0,n) fl(j,0,m) cin>>a[i][j];
    for(auto x:df){
        for(auto y:df){
            map<ll,ll>mp;
            fl(i,0,n){
                fl(j,0,m){
                    mp[a[i][j]-i*x-j*y]++;
                }
            }
            ll mx=0;
            for(auto l:mp) mx=max(mx,l.second);
            ans=min(ans,n*m-mx);
        }
    }
    co(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}