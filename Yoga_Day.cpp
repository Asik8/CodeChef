#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, i = 1;
    cin >> n;
    if (n < 12)
        cout << "0\n";
    else
    {
        for (i; i <= 100; i++)
        {
            if ((i + 1) * 12 > n)
            {
                break;
            }
        }
        cout << i << endl;
    }

    return 0;
}