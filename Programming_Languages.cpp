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
        ll n,m,x,y,a,b;
        cin>>n>>m>>x>>y>>a>>b;
        if(x==n && y==m || x==m && y==n) cout<<"1\n";
        else if(a==n && b==m || a==m && b==n) cout<<"2\n";
        else cout<<"0\n";
    }
    return 0;
}