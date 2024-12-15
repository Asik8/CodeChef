#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >>n>>k;
        vector <ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            if(x<=k)
            {
                k-= x;
                v.pb(1);
            }
            else v.pb(0);
        }           
        for (int i = 0; i < n; i++)cout<<v[i];
        cout<<endl;           
    }
    return 0;
}