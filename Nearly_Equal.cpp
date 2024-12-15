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
        ll n,m;
        cin >> n>>m;
        string a,b;
        cin>>a>>b;
        int mi = INT_MAX;
        for (int i = 0; i < n-m+1; i++)
        {
            ll c=0,l=0;
            for(int j=i;j<m+l;j++)
            {
                l++;
                for(int k=0;k<m;k++)
                {
                    if(a[j] == b[k])c++;
                }
            }
            if(c<mi) mi = c;
        }     
        cout<<mi<<endl;
    }

    return 0;
}