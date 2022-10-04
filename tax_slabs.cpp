// Tax Slabs

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
        int tax = 0;
        if (n > 250000)
            tax += ((0.05) * ((min(n, 500000) - 250000)));
        if (n > 500000)
            tax += (0.10) * (min(n, 750000) - 500000);
        if (n > 750000)
            tax += (0.15) * (min(n, 1000000) - 750000);
        if (n > 1000000)
            tax += (0.20) * (min(n, 1250000) - 1000000);
        if (n > 1250000)
            tax += (0.25) * (min(n, 1500000) - 1250000);
        if (n > 1500000)
            tax += (0.30) * (n - 1500000);

        cout << n - tax << endl;
    }
    return 0;
}
// End of Code