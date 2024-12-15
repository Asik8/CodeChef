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
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        if(a==c && b==d && k==1){
            pn continue;
        }
        ll l=abs(c-a)+abs(d-b);
        if(l>k) pn
        else if(l==k || !((k-l)%2)) py else pn      
    }
    return 0;
}