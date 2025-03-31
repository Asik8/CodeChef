#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,k,s=0;
        cin >>n>>k;
        vector <ll> v(n);
        for (auto& x:v){
            cin >>x; 
            s+=x;
        }      
        if(s<n) pn
        else if(k==0 && (s%n)>0) pn
        else py
    }
    return 0;
}