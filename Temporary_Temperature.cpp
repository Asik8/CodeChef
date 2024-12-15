#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"Yes\n";
#define pn cout<<"No\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

bool check(ll x, const vector<ll>& v, ll k) {
    ll ch=0,mn=v[0]-x,mx=v[0]+x;
    for (ll i = 1; i < v.size(); i++){
        ll n_mn=v[i]-x,n_mx=v[i]+x;
        if(mx<n_mn || mn>n_mx){
            ch++;
            mn=n_mn;
            mx=n_mx;
            if(ch>k) return false;
        } 
        else{
            mn=max(mn,n_mn);
            mx=min(mx,n_mx);
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--) {
        ll n,k;
        cin >> n>>k;
        vector<ll> v(n);
        for (auto &x:v) cin>>x;
        ll l=0,r =*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end()),ans=r;
        while(l<=r){
            ll mid = (l+r) / 2;
            if(check(mid, v, k)){
                ans = mid;
                r = mid - 1;
            } 
            else l=mid + 1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
