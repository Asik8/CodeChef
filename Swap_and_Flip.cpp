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
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        string s,t;
        cin>>s>>t;
        if(s==t){
            py
            continue;
        }
        ll so=0,sz=0,to=0,tz=0;
        for(auto x:s){
            if(x=='1') so++;
            else sz++;
        }               
        for(auto x:t){
            if(x=='1') to++;
            else tz++;
        }     
        bool f=false;
        if((so==to && sz==tz) || (so==tz && to==sz) && (!(so%2) && !()) && n>1){
            f=true;
        }
        else{
            ll c=0;
            forni if(s[i]!=t[i]) c++;
            // co(c)
            if(!((c-(2*min(min(so,to),min(sz,tz))))%2))f= true;
        }
        if(f){py} else pn     
            
    }
    return 0;
}