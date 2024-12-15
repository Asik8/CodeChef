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
        ll n,m;
        cin >> n>>m;
        vector <ll> a(n),b(m);
        for (auto& x:a) cin >>x;       
        for (auto& x:b) cin >>x;
        ll c=0;
        for(int i=0;i<m;i++){
            if(a[b[i]-1]<=0) c++;
            else a[b[i]-1]--;
        }      
        cout<<c<<endl; 
    }
    return 0;
}