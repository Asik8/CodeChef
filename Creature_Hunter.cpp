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
    ll n,k,c=0;
    cin >> n>>k;
    vector <pi> v(n);
    for (auto& x:v) cin>>x.first>>x.second;
    ll m1=0,m2=0;
    forni{
        if(v[i].first==1) m1=max(m1,v[i].second);
        else if(v[i].first==2) m2=max(m2,v[i].second);
    }
    ll t1=(m1>0)?(k+m1-1)/m1:LLONG_MAX;
    ll t2=(m2>0)?((k+m2-1)/m2)*2:LLONG_MAX;
    ll mx=max(m1,m2);
    ll hits=k/mx;
    ll t3=hits*((mx==m1)?1:2);
    hits=k%mx;
    if(hits>0) t3+=((hits<=m1)?1:2);
    co(min(min(t1,t2),t3))
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