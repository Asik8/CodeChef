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
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,k;
    cin >> n>>k;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    vec(ll) in;
    f(i,0,n-1) if(v[i+1]<v[i])in.pb(i+1);
    bool l= false;
    ll c=1;
    vec(ll) b=v;
    f(i,0,n-1){
        if(b[i]<=b[i+1])c++;
        else if(b[i]>b[i+1] && b[i]<=b[i+1]*k && !l){
            l=true;
            c++;
            b[i+1]*=k;
        }
        else break;
    }
    // co(c+1)
    for(auto x:in){
        ll cnt=0;
        b=v;
        l=false;
        f(i,x,n-1){
            if(b[i]<=b[i+1])cnt++;
            else if(b[i]>b[i+1] && b[i]<=b[i+1]*k && !l){
                l=true;
                cnt++;
                b[i+1]*=k;
            }
            else break;
        }
        c=max(c,cnt+1);
    }
    co(c)
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