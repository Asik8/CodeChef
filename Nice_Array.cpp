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
        ll n,k,s=0,nc=0,pc=0;
        cin >> n>>k;
        vector <ll> v(n),a(n),b(n);
        bool neg=false,pos=false;
        for (auto& x:v){
            cin >>x;
            if(x>=0){
                pos=true;
                pc++;
            }
            else{
                neg=true;
                nc++;
            }
            s+=x;
        }  
        if(s==0) py
        else if(s<0 && llabs(s)<=pc && pc<n && k>1) py
        else if(s>0 && s<=nc && nc<n && k>1) py
        else pn
    }
    return 0;
}