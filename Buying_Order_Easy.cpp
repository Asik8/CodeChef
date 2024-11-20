#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        ll c=0;
        bool f0=false,f1=false;
        for(int i=0;i<n;i++){
            if(v[i]==1 && !f1) f1=true;
            else if(v[i]==0 && !f0) f0=true;
            if(v[i]==1&& i!=1 && f0) c+=2;
            else if(v[i]==0 && i!=0 && f1) c+=2;
            else c++;
        }
        cout<<c<<endl;   
    }
    return 0;
}