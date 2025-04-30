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
    if(n==1){
        co(-1)
        return;
    }
    if(!(n&1)){
        fl(i,0,n/2) ct(-1)
        fl(i,0,n/2) ct(1)
        elc
    } else{
        ll l=0,r=0;
        vec(ll) v;
        while(r<n){
            while(r<n && l<2){
                v.pb(-1);
                l++;
                r++;
            }
            if(r<n && l==2){
                l=0;
                v.pb(2);
                r++;
            }
        }
        ll s=0;
        for(auto x:v) s+=x;
        // co(s)
        if(n>3 && abs(s)==2) v.back()=abs(s)-1;
        if(n>3 && abs(s)==1){
            // co("Hit")
            // flx(v)
            ll x=sz(v)-1;
            while(x>=0){
                if(v[x]>0){
                    v[x]+=1;
                    break;
                }
                x--;
            }
        }
        flx(v)
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