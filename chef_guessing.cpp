// Guessing Game

#include "bits/stdc++.h"
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long odd_sum = 0;
        long long ne = n / 2, me = m / 2;
        odd_sum += (n - ne) * (me);
        odd_sum += (ne) * (m - me);
        long long v = __gcd(odd_sum, (n * m));
        cout << odd_sum / v << "/" << (n * m) / v << endl;
    }
    return 0;
}
// End of code