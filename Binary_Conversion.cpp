#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >>n>>k;
        string s1,s2;
        cin>>s1>>s2;
        ll c= 0;
        for(int i=0;i<n;i++)
        {
            if(s1[i] != s2[i]) c++;
        }   
        if(c<= k) cout<<"YES\n";
        else cout<<"NO\n";    
    }

    return 0;
}