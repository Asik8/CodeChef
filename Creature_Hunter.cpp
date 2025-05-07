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
    sort(all(v));
    ll m1=0,m2=0;
    forni{
        if(v[i].first==1) m1=max(m1,v[i].second);
        else m2=max(m2,v[i].second);
    }
    ll t1=((k+(m1-1))/m1),t2=((k+(m2-1))/m2)*2,t2=0,ts=0,tf=0;
    if(m1<=m2){ tf=2; ts=1;}
    else { tf=1; ts=2;}
    while(k){
        c=k/max(m1,m2);
        k-=(c*max(m1,m2));
        c*=tf;
        if()
    }
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