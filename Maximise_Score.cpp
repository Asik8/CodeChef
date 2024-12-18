#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n);
        ll ans=INT_MAX;
        for (auto& x:v) cin >>x;  
        ans=min(ans,llabs(v[0]-v[1]));
        ans=min(ans,llabs(v[n-1]-v[n-2]));
        for(int i=1;i<n-1;i++){
            ans=min(ans,max(llabs(v[i]-v[i+1]),llabs(v[i]-v[i-1])));
        }
        co(ans);
    }
    return 0;
}