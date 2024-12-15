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
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        map<ll,ll>mp;
        ll c=0;
        for(auto x:v){
            if(x!=0){
                if(mp[x]==0) c++;
                mp[x]++;
            }
        }   
        if(c<=1) py else pn  
    }
    return 0;
}