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
        ll n,m;
        cin>>n>>m;
        string s,t,a,b;
        cin>>s>>t;
        if(s==t){
            py
            continue;
        }
        ll as=0,bs=0,at=0,bt=0;
        for(auto x:s) if(x=='a') as++;
        for(auto x:s){
            if(x=='a') break;
            else bs++;
        }
        
        for(auto x:t) if(x=='a') at++;
        for(auto x:t){
            if(x=='a') break;
            else bt++;
        }
        if(as==at && bs==bt) py
        else pn
    }
    return 0;
}