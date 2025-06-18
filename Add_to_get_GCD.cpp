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

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int steps_to_non_prime(int x) {
    int steps = 0;
    while (is_prime(x + steps)) steps++;
    return steps;
}

void asikM(){
    ll x,y,c=0;
    cin>>x>>y;
    if(x==1){
        x++;
        c++;
    }
    if(y==1){
        y++;
        c++;
    }
    ll l=x,r=y;
    if(__gcd(x,y)>1){
        co(c)
        return;
    }
    if(l>r) swap(l,r);
    ll mn1=LLONG_MAX,mn2=LLONG_MAX;
    fl(i,2,l+1){
        if(!(l%i)){
            ll m=(r+(i-1))/i;
            mn1=min(mn1,(m*i)-r);
        }
    }
    if(mn1==LLONG_MAX){
        ll k=steps_to_non_prime(l);
        l+=k;
        fl(i,2,l+1){
            if(!(l%i)){
                ll m=(r+(i-1))/i;
                mn1=min(mn1,(m*i)-r);
            }
        }
        mn1+=k;
    }
    fl(i,2,r+1){
        if(!(r%i)){
            ll m=(l+(i-1))/i;
            mn2=min(mn2,(m*i)-l);
        }
    }
    l=x;
    if(mn2==LLONG_MAX){
        ll k=steps_to_non_prime(r);
        r+=k;
        fl(i,2,r+1){
            if(!(r%i)){
                ll m=(l+(i-1))/i;
                mn2=min(mn2,(m*i)-l);
            }
        }
        mn2+=k;
    }
    co(c+min(mn1,mn2))
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