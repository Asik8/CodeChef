#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,c=0;
    cin>>n;
    vector<ll>v(n);
    for(auto& x:v)cin>>x; 
    if(v[0]!=v[1]){
        if(v[0]<abs(v[1]-v[0])){
            c+=v[0];
            v[0]=0;
        }
        else{
            c+=abs(v[1]-v[0]);
            v[1]=v[0];
        }
    }
    co(c)
    fl(i,1,n-1,1){
        if(v[i]!=0 && v[i+1]+v[i-1]!=v[i]){
            if(v[i]<abs(v[i]-v[i+1]+v[i-1])){
                c+=v[i];
                v[i]=0;
            } else{
                c+=abs(v[i]-v[i+1]+v[i-1]);
                v[i]=v[i+1]+v[i-1];
            }
        }
    }
    co(c)
    if(v.back()!=v[n-2]){
        if(v[n-1]<abs(v[n-2]-v.back())) c+=v.back();
        else c+=abs(v[n-2]-v.back());
    }
    // if(v.back()<)
    co(c)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}