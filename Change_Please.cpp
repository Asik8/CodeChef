#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll w=0,m=100;
        while(m>n){
            if(n>(m-10) && n<m) break;
            w+=10;
            m-=10;
        }      
        cout<<w<<endl;
    }
    return 0;
}