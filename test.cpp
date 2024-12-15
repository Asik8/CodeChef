#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define co(x1) cout << x1 << "\n";
#define f(x1, x2, x3) for (int x1 = x2; x1 < x3; x1++)
#define fr(x1, x2, x3) for (int x1 = x2; x1 >= x3; x1--)
#define forni for (int i = 0; i < n; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l = 1000012;
    vector<int> e(10);
    while (l)
    {
        e[(l % 10)]++;
        l /= 10;
    }
    for (int i = 0; i < 10; i++)
        cout <<i<<" "<< e[i] << "\n";

    return 0;
}