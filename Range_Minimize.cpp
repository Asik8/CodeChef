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
        sort(v.begin(),v.end());
        ll mn=LONG_LONG_MAX;
        if((v[n-1]-v[0])<mn && (v[n-1]-v[0])>=0) mn = v[n-1]-v[0];
        if((v[n-1]-v[2])<mn && (v[n-1]-v[2])>=0) mn= v[n-1]-v[2];
        if((v[n-3]-v[0])<mn && (v[n-3]-v[0])>=0) mn= v[n-3]-v[0];
        if((v[n-2]-v[1])<mn && (v[n-2]-v[1])>=0) mn= v[n-2]-v[1];
        cout<<mn<<endl;
    }
    return 0;
}