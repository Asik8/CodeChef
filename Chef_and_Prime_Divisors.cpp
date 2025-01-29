#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"Yes\n";
#define pn cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll a,b;
    cin>>a>>b;
    bool f=true;
    ll g=__gcd(a,b);
    while(b!=1){
        if(g==1){
            f=false;
            break;
        }
        b/=g;
        g=__gcd(b,g);
    }
    if(f) py else pn
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}