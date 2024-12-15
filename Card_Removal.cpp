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
        ll n;
        cin >> n;
        vector <ll> v(11,0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v[x]++;
        }   
        int ma = *max_element(v.begin(),v.end());
        cout<<n-ma<<endl;    
    }
    return 0;
}