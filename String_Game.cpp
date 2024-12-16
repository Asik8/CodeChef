#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,z=0,o=0;
        cin >> n;
        string s;
        cin>>s;
        for(auto x:s){
            if(x=='1') o++;
            else z++;
        }
        if(min(z,o)%2) co("Zlatan") else co("Ramos")  
    }
    return 0;
}