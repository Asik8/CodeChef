#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

bool check(string s){
    ll l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin>>s;
        if(n==2){
            if(s[0]!=s[1]) cout<<"-1\n";
            else cout<<"0\n";
        }    
        else if(s[0]!=s[n-1]){
            string s1=s.substr(0,n-1);
            string s2=s.substr(1,n-1);
            if(check(s1) && check(s2)) cout<<"-1\n";
            else cout<<"1\n";
        }       
        else{
            bool f=false;
            ll l=1,r=n-2;
            while(l<r){
                if(s[l]!=s[r]){
                    f=true;
                    break;
                }
                l++;
                r--;
            }
            if(f) cout<<"1\n";
            else cout<<"0\n"; 
        }
    }
    return 0;
}