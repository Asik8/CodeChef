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
const int N=(1LL<<15);
vector<int> p;

bool is_palindrome(ll n){
    string s=to_string(n),t;
    reverse_copy(s.begin(),s.end(),back_inserter(t));
    return s==t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(int i=0;i<N;i++){
        if(is_palindrome(i)) p.pb(i);
    }
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n),freq(N+1);
        for (auto& x:v){
            cin >>x;
            freq[x]++;
        }    
        ll c=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<p.size();j++){
                ll l=v[i]^p[j];
                c+=freq[l];
            }
        }  
        co(c/2) 
    }
    return 0;
}