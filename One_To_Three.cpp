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
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x; 
        ll s=0;
        for(int i=1;i<n-1;i++){
            if(v[i-1]+v[i+1]==4 && v[i]==3) v[i]=4-v[i];
        }   
        for(int i=n-2;i>0;i--){
            if(v[i-1]+v[i+1]==4 && v[i]==3) v[i]=4-v[i];
        }   
        forni s+=v[i];
        cout<<s<<endl;   
    }
    return 0;
}