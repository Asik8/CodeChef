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
        ll n,c1=0,c2=0;
        cin >> n;
        forni{
            ll x;
            cin>>x;
            if(i==n-1 && x==1) c1++;
            if(i==0 && x==0) c2++;
        }  
        if(c1&c2) cout<<2*n-2<<endl;
        else cout<<2*n-1<<endl;
    }
    return 0;
}