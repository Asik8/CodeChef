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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k,s=0;
        cin >> n>>k;
        vector <ll> a(n),b(n);
        for (auto& x:a) cin >>x;       
        for (auto& x:b) cin >>x;
        forni{
            s+=(a[i]*b[i]);
        }     
        if(s<k){
            co(-1)
            continue;
        }  
        ll in=0;
        vector<ll>p;
        forni p.pb(a[i]*b[i]);
        sort(p.begin(),p.end());
        for(int i=n-1;i>=0;i--){
            if(k<=0){
                in=i;
                break;
            }
            k-=p[i];
        }
        co(n-in-1)
    }
    return 0;
}