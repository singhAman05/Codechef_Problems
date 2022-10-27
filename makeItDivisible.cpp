#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = pow(10, n - 1);
        int y = pow(10, n);
        for (int i = x; i < y; i++)
        {
            if (i % 3 == 0 && i % 9 != 0)
            {
                if (i & 1)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}