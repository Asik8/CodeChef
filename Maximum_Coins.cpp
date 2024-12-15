#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> n >> x;
        int lose = 0;
        int win = 0;
        if (x == 1)
        {
            if (x == 1)
                win = pow(2, n);
            for (int i = 1; i <= n - 1; i++)
            {
                lose += pow(2, i);
            }
        }
        else
        {
            for(int i=1;i<=n-x;i++)
                lose+= pow(2,i);
            for(int i=(n-x)+1;i<=n;i++)
                win+= pow(2,i);
        }
        cout << win - lose << endl;
    }
    return 0;
}