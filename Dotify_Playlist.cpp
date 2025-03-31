#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,k,l;
        cin >> n>>k>>l;
        vector<ll>v;
        bool f=false;
        f(i,0,n){
            ll m,le;
            cin>>m>>le;
            if(le==l){
                v.pb(m);
                f = true;
            }
        } 
        if(!f || v.size()<k) cout<<"-1\n";
        else{
            sort(v.begin(),v.end());
            ll ans=0;
            while(k--){
                ans+=v.back();
                v.pop_back();
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}