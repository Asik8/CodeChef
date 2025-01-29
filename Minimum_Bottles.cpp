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
#define all(x1) x1.begin(),x1.end()
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,x;
    cin >> n>>x;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    sort(v.rbegin(),v.rend());
    ll c=0,l=-1;
    forni{
        if(v[i]==x)c++;
        else{
            l=i;
            break;
        }
    }
    if(l!=-1){
        ll r=n-1,s=0;
        while(l<r){
            s+=v[r];
            if(s+v[l]==x){
                c++;
                s=0;
                l++;
            }
            while(s+v[l]>x)l++;
            r--;
        }
    }
    if(c==0) co(1)
    else co(c)
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