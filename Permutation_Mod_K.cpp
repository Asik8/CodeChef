#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
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
        cin>>n>>k;
        if(n==k && k==1){
            co(-1)
            continue;
        }       
        if(!(n%2)){
            fr(i,n-1,1) cout<<i<<" ";
            co(n)
        }
        else{
            fr(i,n,1) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}