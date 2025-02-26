#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,ll>m;
    for(auto x:s1) m[x]++;
    for(auto x:s2) m[x]++;
    for(auto x:s3) m[x]++;
    if(m['0']%n || m['1']%n){
        co(-1)
        return;
    }
    char mn;
    if(m['0']>=m['1'])mn='1';
    else mn='0';
    ll c1=0,c2=0,c3=0;
    for(auto x:s1) if(x==mn)c1++;
    for(auto x:s2) if(x==mn)c2++;
    for(auto x:s3) if(x==mn)c3++;
    if(m[mn]==0) co(0)
    else co(n-max({c1,c2,c3}))
    // else if(m[mn]==2*n) 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}