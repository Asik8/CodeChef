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
        vector <ll> a(n),b(n);
        for (auto& x:a) cin >>x;       
        for (auto& x:b) cin >>x;    
        ll in=-1,c=0;
        forni{
            if(min(a[i],b[i])!=b[i]){
                in = i;
                c++;
            }
        }   
        ll ans=0,res=0;
        if(c==0||c>1) forni ans+=min(a[i],b[i]);
        else{
            forni ans+=b[i];
            res = ans;
            forni{
                if(i!=in){
                    ll cv = res-b[in]-b[i]+a[i]+a[in];
                    ans = min(ans,cv);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}