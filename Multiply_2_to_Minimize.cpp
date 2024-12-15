#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector <ll> v(n),ans;
        for (auto& x:v) cin >>x;    
        map<ll,ll>mp;
        forni{
            mp[v[i]]++;
            if(mp[v[i]]>=2){
                ll val = v[i];
                while(true){
                    ll total = mp[val];
                    if(mp[val]<2) break;
                    mp.erase(val);
                    for(int j=1;j<=(total/2);j++) mp[val*2]++;
                    if((total%2)) mp[val]++;
                    val*=2;
                }
            }
            ans.pb(mp.size());
        }   
        for(ll x:ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}