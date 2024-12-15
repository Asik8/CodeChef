#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        // vector <ll> v(3);
        // for (auto& x:v) cin >>x; 
        // ll m;
        // cin>>m;
        // while(m--)
        // {
        //     sort(v.begin(),v.end());
        //     v[0]++;
        // }      
        // if(v[0] == v[1] || v[0] == v[2] || v[1] == v[2])py
        // else pn
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+d == b || a+d == c || b == c) py
        else if(b+d == a || b+d == c || a == c) py
        else if(c+d == a || c+d == b || a == b)py
        else pn
    }
    return 0;
}