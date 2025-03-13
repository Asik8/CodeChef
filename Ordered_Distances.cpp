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
    ll n;
    cin >> n;
    vector <ll>a(n),b(n);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    vec(pi) p;
    bool f=false;
    ll ans=-1;
    forni{
        if(a[i]==b[0]){
            ll l=a[i];
            fl(j,0,n){
                p.pb({abs(a[i]-a[j]),a[j]});
            }
            sort(all(p));
            // for(auto [x,y]:p){
            //     cout<<x<<" "<<y<<el
            // }
            bool f1=true;
            fl(j,0,n){
                if(b[j] != p[j].second){
                    f1= false;
                    break;
                }
            }
            if(f1){
                ans=(i+1);
                break;
            }
        }
    }
    co(ans)
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