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
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,s=0;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v){
        cin >>x; 
        s+=x;
    }
    if(!(s%3)){
        pn
        return;
    }
    s=0;
    bool f=true;
    forni{
        s+=v[i];
        if(!(s%3)) f=false;
    }
    if(f){
        py
        return;
    }
    s=0;
    f=true;
    ll l=0;
    while(l<n){
        s+=v[l];
        if(!(s%3)){
            if(v[l]==2 && l+1<n && v[l+1]==1){
                swap(v[l],v[l+1]);
                flx(v)
                break;
            } if(v[l]==2 && l+1<n && v[l+1]==1){
                reverse(v.begin(),v.begin()+l+2);
                flx(v)
                break;
            }
            // if(v[l]==2 && l+1<n && v[l+1]==1){
            //     reverse(v.begin(),v.begin()+l+2);
            //     flx(v)
            //     break;
            // } else if(v[l]==2 && l+1<n && v[l+1]==1)
        }
        l++;
    }
    s=0;
    forni{
        s+=v[i];
        if(!(s%3)){
            pn
            return;
        }
    }
    py
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