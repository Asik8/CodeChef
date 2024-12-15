#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
#define s 1000000009

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = sqrt(s);
    vector<bool> b(n + 1, true);
    vector<ll> primes;
    b[0] = b[1] = false;
    for (ll i = 2; i * i <= n; i++) 
        if (b[i]) for (ll j = i * i; j <= n; j += i) b[j] = false;
    for (ll i = 2; i <= n; ++i) 
        if (b[i]) primes.pb(i);
    ll t;
    cin >> t;
    while (t--) {
        ll l,r;
        cin>>l>>r;
        for(int i=0;i<primes.size();i++)
            if(primes[i]>=l && primes[i]<=r) cout<<primes[i]<<endl;
            cout<<endl;
    }
    return 0;
}
