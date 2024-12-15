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
        ll n,x;
        cin>>n>>x;
        ll l=n,rt=INT_MIN;
        while(l--){
            ll s,r;
            cin>>s>>r;
            if(x>=s && r>rt) rt=r;
        }
        cout<<rt<<endl;
    }
    return 0;
}