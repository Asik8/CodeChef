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
#define sz(x) x.size()
#define vec vector<ll>
ll LCM(ll a,ll b){
    return (a*(b/__gcd(a,b)));
}

void asikM(){
    ll x,y,k;
    cin>>x>>y>>k;
    while(k--){
        if(x==y) break;
        ll a=__gcd(x,y);
        ll b=LCM(x,y);
        if(x>y) x=a;
        else if(y>x) y=a;
        if(x>b) x=b;
        else if(y>b) y=b;
    }
    co(x+y)
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