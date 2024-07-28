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
        cin>>n>>k;
        vector <ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i]; 
        ll c=0,in=0;
        bool f = true;
        for(int i=0;i<n;i++)
        {
            if(c+v[i]>=k)
            {
                c+= v[i];
                c-=k;
            }
            else if(c+v[i]<k)
            {
                f = false;
                in = i;
                break;
            }
        }  
        if(f) cout<<"YES\n";
        else cout<<"NO "<<in+1<<endl;    
    }
    return 0;
}