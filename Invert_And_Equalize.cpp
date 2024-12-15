#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin>>n;
        string a;
        cin >> a;
        int c = 0;
 
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                a[i] = '!';
            }
        }
        int o=0,z=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')z++;
            else if(a[i] == '1') o++;
        }
        cout<<min(o,z)<<endl;
        
    }
    return 0;
}