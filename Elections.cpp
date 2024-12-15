#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,x;
        cin >> n>>x;
        vector <ll> a(n),b(n);
        for (auto& l:a) cin >>l;       
        for (auto& l:b) cin >>l;  
        vector<ll> dis;
        forni dis.pb(a[i]-b[i]);
        sort(dis.begin(),dis.end(),greater<ll>());
        forni{
            if(x<=0) break;
            if(dis[i]<=0){
                if(dis[i]==0){
                    dis[i]=1;
                    x--;
                }
                else{
                    x-=min(x,llabs(dis[i]));
                    if(x>0){
                        dis[i]=1;
                        x--;
                    }
                }
            }
        }
        ll c=0;
        forni if(dis[i]>0) c++;
        if(c>n/2)py else pn
    }
    return 0;
}