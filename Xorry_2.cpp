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
        ll n,c=1,a=0;
        cin >> n;
        ll x=__lg(n);
        bool f=false;
        for(int i=x-1;i>=0;i--){
            if(n&(1LL<<i)){
                a=a|(1LL<<i);
                f=true;
            }
            else if(f) c*=2;
        }     
        co(c)  
    }
    return 0;
}