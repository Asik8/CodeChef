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
        ll n,x,y;
        cin >> n;
        cin>>x>>y;
        ll a = n*x;
        ll b = (n/2)*y;
        if(n%2 ==1) b+=x;
        cout<<max(a,b)<<endl;      
    }

    return 0;
}