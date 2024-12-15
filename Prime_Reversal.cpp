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
        ll z1=0,z2=0,o1=0,o2=0;
        char c;
        for (int i = 0; i < n; i++) 
        {
            cin >> c;
            if(c == '0') z1++;
            else o1++;
        }
        for (int i = 0; i < n; i++) 
        {
            cin >> c;
            if(c == '0') z2++;
            else o2++;
        }
        if(z1==z2 && o1==o2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}