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
    ll n,c=1;
    cin >> n;
    map<char,ll>m;
    string s;
    cin>>s;
    set<string>st;
    st.insert(s);
    m[s[0]]++;
    m[s[1]]++;
    for(int i=2;i<n;i++){
        string a=s;
        // cout<<i<<" = Initial a: "<<a<<el;
        if(m['0']>0 && m['0']==m['1']){
            // cout<<"Before: "<<a<<el
            c+=c;
            ll l=0;
            while(l<i){
                if(a[l]=='0') a[l]='1';
                else a[l]='0';
                l++;
            }
            // cout<<"After: "<<a<<el
            st.insert(a);
        }
        m[s[i]]++;
    }
    // co("Outside the Loop")
    string a=s;
    if(m['0']==m['1']){
        c+=c;
        ll l=0;
        while(l<n){
            if(a[l]=='0') a[l]='1';
            else a[l]='0';
            l++;
        }
        // cout<<"After: "<<a<<el
        st.insert(a);
    }
    // co(sz(st))
    co(c)
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