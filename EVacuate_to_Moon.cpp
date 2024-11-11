#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,m,h;
        cin>>n>>m>>h;
        vector <ll> cars(n),en(m);
        for (auto& x:cars) cin >>x;       
        for (auto& x:en) cin >>x;   
        sort(cars.begin(),cars.end());    
        sort(en.begin(),en.end());    
        ll ans=0,c=n-1,e=m-1;
        while(true){
            if(c<0 || e<0) break;
            ans+=min(cars[c],en[e]*h);
            c--;e--;
        }
        cout<<ans<<endl;
    }
    return 0;
}