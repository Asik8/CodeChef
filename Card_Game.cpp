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
        ll a,b;
        cin>>a>>b;
        bool f = false;
        ll ans=0;
        for(int i=1;i<=a;i++){
            if(i!=b && !((i+b)%2)) ans++;
        }      
        cout<<ans<<endl;
    }
    return 0;
}