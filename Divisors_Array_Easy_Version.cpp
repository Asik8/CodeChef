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
const ll N=1e9+7;

ll divisors(ll n){
    ll c=0;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){
            c++;
            if((n/i) != i) c++;
        }
    }
    return (c%N);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        ll n,m;
        cin >> n>>m;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;  
        ll fac=1;
        for(int i=m;i>0;i--) fac=((fac%N)*(i%N))%N;
        // for(int i=m;i>0;i--) fac*=i;
        forni{
            // v[i]=((v[i]%N)*(fac%N))%N;
            v[i]=(v[i]*(fac)%N)%N;
        }   
        forni{
            cout<<divisors(v[i])<<" ";
        }  
        cout<<endl;
    return 0;
}