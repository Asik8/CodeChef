#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a,b,k,c=0;
        cin >> a>>b>>k;
        while(1)
        {
            if((a+1)*k == b)
            {
                c+=2;
                break;
            }
            else if(a*k<=b)
            {
                c++;
                a*=k;
                if (a==b) break;
            }
            else
            {
                c+=b-a;
                a=b;
                break;
            } 
        }
        cout<<c<<endl;
    }

    return 0;
}