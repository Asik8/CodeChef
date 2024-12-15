#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    vector <string> v(t);
    for (auto& x:v) cin >>x; 
    map<string,ll>mp;
    string ans;
    for(int i=v.size()-1;i>=0;i--){
        if(mp[v[i]]==0){
            ans.pb(v[i][v[i].size()-2]);
            ans.pb(v[i][v[i].size()-1]);
        }
        mp[v[i]]++;
    }      
    cout<<ans<<endl;
    return 0;
}