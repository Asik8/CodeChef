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
        vector<ll> v(n+1);
        if(n==3){
            cout<<3<<" "<<2<<" "<<1<<endl;
            continue;
        }
        v[1]=n;
        v[n]=n-1;
        v[2]=n-2;
        v[n-1]=n-3;
        ll l=1;
        for(int i=3;i<=n-2;i++){
            v[i]=l;
            l++;
        }
        for(int i=1;i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;     
    }
    return 0;
}