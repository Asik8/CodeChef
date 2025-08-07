#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define t(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    string s,t;
    cin>>s>>t;
    ll so=0,sz=0,To=0,tz=0;
    for(auto x:s){
        if(x=='0') sz++;
        else so++;
    }
    for(auto x:t){
        if(x=='0') tz++;
        else To++;
    }
    if(abs(so-To)%2){
        pn
        return;
    }
    ll dis=abs(sz-tz);
    dis+=(abs(so-To));
    // co(dis)
    if(!(dis%2)) py else pn
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}