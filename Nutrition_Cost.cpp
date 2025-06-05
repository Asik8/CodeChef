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
    ll n,c;
    cin >> n>>c;
    vector <ll> a(n),b(n);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    vector<ll> op(110,INT_MAX);
    set<ll>s;
    forni{
        op[a[i]]=min(op[a[i]],b[i]);
        s.insert(a[i]);
    }
    vector<pi>v;
    for(auto x:s) v.pb({op[x],x});
    sort(all(v));
    // for(auto [x,y]:v) cout<<x<<" "<<y<<el
    ll ans=0,sum=0,dis=0;
    for(auto [x,y]:v) {
        sum+=x;
        dis++;
        ans=max(ans,(c*dis)-sum);
    }
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