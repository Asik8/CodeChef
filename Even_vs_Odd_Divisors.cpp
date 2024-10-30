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
        cin>>n;
        ll e=0,o=0;
        for(int i=1;i<=n;i++){
            if(!(n%i)){
                if((i%2)==0) e++;
                else o++;
            }
        }       
        if(e>o) cout<<"1\n";
        else if(e==o) cout<<"0\n";
        else if(e<o) cout<<"-1\n";
    }
    return 0;
}