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

pi countSubsequences(string s) {
    long long count0 = 0, count1 = 0;
    long long cnt_01 = 0, cnt_10 = 0;
    for (char ch : s) {
        if (ch == '0') {
            cnt_10 += count1;
            count0++;
        } else {
            cnt_01 += count0;
            count1++;
        }
    }
    return {cnt_01,cnt_10};
}

void asikM(){
    ll n,a,b,c,d;
    cin >> n>>a>>b>>c>>d;
    string s1,s2;
    bool f=true;
    forni{
        if(f) s1+='0';
        else s1+='1';
        f=!f;
    }
    f=true;
    forni{
        if(f) s2+='1';
        else s2+='0';
        f=!f;
    }
    ll ans=0;
    pi l=countSubsequences(s1);
    ll c1=count(all(s1),'1'),c0=count(all(s1),'0');
    ans=(c0*a+c1*b+l.first*c+l.second*d);

    l=countSubsequences(s2);
    c1=count(all(s2),'1'),c0=count(all(s2),'0');
    ans=max(ans,c0*a+c1*b+l.first*c+l.second*d);
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