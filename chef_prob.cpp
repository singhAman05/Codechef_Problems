// Chef and easy problem

#include "bits/stdc++.h"
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long chef_win = 0;
        sort(a, a + n);
        for (long long i = n - 1; i >= 0; i = i - 2)
        {
            chef_win += a[i];
        }
        cout << chef_win << endl;
    }
    return 0;
}
// End of code