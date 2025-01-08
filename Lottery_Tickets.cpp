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
const ll N=1e6;

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll l=0,r=LONG_LONG_MAX;
    map<ll,ll>mp;
    f(i,1,n){
        if(v[i]>l && v[i]<v[0]){
            l=v[i];
        }
        else if(v[i]<r && v[i]>v[0]){
            r=v[i];
        }
    }
    ll c=0;
    // cout<<l<<" "<<r<<endl;
    if(r-l==2){
        co(1)
        return;
    }
    if(r>=N) c+=(N-v[0]);
    else if(r<N) c+=((r-v[0]+1)/2);
    if(l==0) c+=((v[0])/2);
    else if(l>0) c+=((v[0]-l+1)/2);
    co(c)
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