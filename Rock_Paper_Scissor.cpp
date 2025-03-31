#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string a,b;
        cin>>a>>b;       
        ll c1=0,c2=0,d=0;
        forni{
            if(a[i] == 'R' && b[i]=='S') c1++;
            else if(a[i] == 'S' && b[i]=='R') c2++;
            else if(a[i] == 'S' && b[i]=='P') c1++;
            else if(a[i] == 'P' && b[i]=='S') c2++;
            else if(a[i] == 'P' && b[i]=='R') c1++;
            else if(a[i] == 'R' && b[i]=='P') c2++;
            else d++;
        }
        if(c1>c2) cout<<"0\n";
        else{
            ll ans=0;
            while(c1<=c2){
                c1++;
                c2--;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}