#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >>n>>k;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;   
        ll mn=INT_MAX;
        forni{
            if(v[i]>=k){
                if(v[i]%k < mn){
                    mn=v[i]%k;
                }
            }
        }
        if(mn==INT_MAX) cout<<"-1\n";
        else cout<<mn<<endl;
    }
    return 0;
}