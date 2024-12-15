#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"Yes\n";
#define pn cout<<"No\n";
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
        vector <ll> a(n),b(n);
        for (auto& x:a) cin >>x;       
        for (auto& x:b) cin >>x; 
        map<ll,ll>mp;
        forni mp[a[i]]=max(a[i],b[i]);
        sort(a.begin(),a.end(),greater<ll>());
        ll c=mp[a[0]];
        bool f=false;
        for(int i=1;i<n;i++){
            if(mp[a[i]]>c){
                f=true;
                break;
            }
        }
        if(f) py
        else{
            if(c>mp[a[1]]) py
            else pn
        }
    }
    return 0;
}