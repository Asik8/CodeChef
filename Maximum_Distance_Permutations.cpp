#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) a[i] = i + 1;
        int m = (n + 1) / 2;
        int in = 0;
        for (int i = 0; i < m; ++i) 
        {
            b[in++] = a[n - 1 - i];
            if (in < n) b[in++] = a[i];
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}
