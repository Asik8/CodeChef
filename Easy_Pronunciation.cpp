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
        string s;
        cin >> s;
        bool f = false;
        int cont = 0;
        for (char c : s)
        {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                cont++;
                if (cont == 4)
                {
                    f = true;
                    break;
                }
            }
            else
                cont = 0;
        }
        if (!f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}