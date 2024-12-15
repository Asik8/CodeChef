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
        vector <ll> v(n-1),a;
        for (auto& x:v) cin >>x;  
        sort(v.begin(),v.end()); 
        ll l=v[0];
        a.pb(l/2);
        a.pb(l-(l/2));
        for(int i=1;i<n-1;i++){
            a.pb(v[i]-a.back());
        }
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}