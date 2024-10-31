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
        string s;
        cin>>s;
        ll c1=0,c2=0;
        for(int i=0;i<n-1;i++){
            if(s[i] == 'a' && s[i+1] == 'b') c1++;
            else if(s[i] == 'b' && s[i+1] == 'a') c2++;
        }       
        if(c1 == c2) cout<<n<<endl;
        else{
            char c = s[0],l=s.back();
            ll a1=n,a2=n;
            forni{
                if(s[i] != c) break;
                a1--;
            }
            for(int i=n-1;i>=0;i--){
                if(s[i] != l) break;
                a2--;
            }
            cout<<max(a1,a2)<<endl;
        }
    }
    return 0;
}