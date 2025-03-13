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
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll a,b,k;
    cin>>a>>b>>k;
    bool f1= false,f2=false;
    ll c1=0,c2=0,t1=a,t2=b;
    while(t2>0){
        if(abs(t2-t1)==k){
            f1=true;
            break;
        }
        c1++;
        t2--;
        t1++;
    }
    if(abs(t2-t1)==k) f1=true;
    t1=a,t2=b;
    while(t1>0){
        if(abs(t2-t1)==k){
            f2=true;
            break;
        }
        c2++;
        t2++;
        t1--;
    }
    if(abs(t2-t1)==k) f2=true;
    ll ans=-1;
    if(f1 && f2) ans= min(c1,c2);
    else if(f1) ans=c1;
    else if(f2) ans=c2;
    co(ans)
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