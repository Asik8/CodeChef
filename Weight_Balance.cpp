#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;   
        ll a=(m*x1);
        ll b=(m*x2);
        ll x=w2-w1;
        if(a>x || b<x) cout<<"0\n";    
        else cout<<"1\n";    
    }
    return 0;
}