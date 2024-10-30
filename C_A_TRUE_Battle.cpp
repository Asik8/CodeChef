#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string s;
        cin>>s;
        vector <ll> v(n);
        forni if(s[i] == '1') v[i] = 1;
        bool f = false;
        if(v[0] || v[n-1]) f = !f;
        for(int i=1;i<n;i++) if(v[i] && v[i-1]) f = true;
        if(f) py
        else pn
    }
    return 0;
}