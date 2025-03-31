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
    ll n;
    cin >> n;
    if(n<3){
        pn
        return;
    }
    if(!(n%3) || !(n%4)){
        py
        return;
    }
    ll a=n,b=n;
    while(1){
        if(a>0){
            a-=3;
            if(!(a%4)){
                py
                return;
            }
        }
        if(b>0){
            b-=4;
            if(!(b%3)){
                py
                return;
            }
        }
        if(a<3 && b<3) break;
    }
    pn
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