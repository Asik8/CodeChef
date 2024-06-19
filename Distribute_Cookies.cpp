#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        ll n,m;
        cin >> n>>m;
        if(n<m)
        {
            int a = m%n;
            int b =((m/n)+1)*n;
            b-=m;
            cout<<min(a,b)<<endl;
        }
        else if(n==m) cout<<0<<endl;
        else cout<<(n-m)<<endl;
    }

    return 0;
}