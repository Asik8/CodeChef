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
const int N=1005;
map<ll,ll>m;
vec(bool) ch(N,false);

void asikM(){
    ll n;
    cin >> n;
    co(m[n])
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    ch[1]=true;
    ch[3]=true;
    m[1]=1;
    m[3]=1;
    ll l=2;
    for(int i=2;i<=1000;i++){
        if(!ch[i]){
            m[i]=l;
            ch[i]=true;
            m[i+3]=l++;
            ch[i+3]=true;
        }
    }
    while (t--)
    asikM();      
    return 0;
}