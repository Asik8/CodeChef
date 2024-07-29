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
        ll n;
        cin >> n;
        int in1=0,in2=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==1) in1 = i;
            if(x==n) in2 = i;
        }
        if(in1<in2) cout<<in1+(n-1-in2)<<endl;
        else cout<<in1+(n-in2-2)<<endl;
    }
    return 0;
}