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
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,c1=0,c2=0;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v){
        cin >>x; 
        if(x==0) c1++;
        else c2++;
    }
    // for(int i=0;i<n-1;i++){
    //     v[i+1]=abs(v[i]-v[i+1]);
    // }
    // co(v.back())
    co(min(c1,c2))
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}