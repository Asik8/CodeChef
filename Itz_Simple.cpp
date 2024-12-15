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
        ll n,k,p;
        cin >> n>>k>>p;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;  
        ll l=*max_element(v.begin(),v.end());
        k+=l;
        bool f= false;
        forni{
            if(v[i]==l && !f) f=true;
            else if(v[i]==l && f) p+=v[i];
            else if(v[i]!=l) p+=v[i];
        }    
        // cout<<k<<" "<<p<<endl;
        if(k==p) co("Equal")
        else if(k>p) co("Ved") 
        else co("Varun")
    }
    return 0;
}