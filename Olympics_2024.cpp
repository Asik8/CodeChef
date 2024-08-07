#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d=0;
    cin>>a>>b>>c;
    d+= 5-a;
    d+= 5-b;
    d+= 5-c;
    cout<<d<<endl;
    return 0;
}