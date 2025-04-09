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
    ll n;
    cin >> n;
    vector <ll> v(n);
    set<ll>s;
    for (auto& x:v){
        cin >>x; 
        s.insert(x);
    }
    sort(all(v));
    ll l=0,r=n-1;
    while(l<=r){
        ll x=v[l]+v[r];
        if(s.count(x)==0){
            cout<<v[l]<<" "<<v[r]<<el 
            return;
        }
        l++;
    }
    l=0,r=n-1;
    while(l<=r){
        ll x=v[l]+v[r];
        if(s.count(x)==0){
            cout<<v[l]<<" "<<v[r]<<el 
            return;
        }
        r--;
    }
    co(-1)
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