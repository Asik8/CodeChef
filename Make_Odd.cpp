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
    string a,b;
    cin>>a>>b;
    ll c=0,c2=0;
    forni{
        if(a[i]==b[i] && a[i]=='1') c++;
        else if(a[i]!=b[i]) c2++;
    }
    // co(c)
    // co(c2)
    if(c%2==1 || (!(c%2) && (c2)>0) || (c==0 && (c2)>0)) py else pn
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