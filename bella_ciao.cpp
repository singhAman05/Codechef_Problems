#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        ll D, d, p, q, count = 0;
        cin >> D >> d >> p >> q;
        ll n = D / d;
        ll r = D % d;
        ll s = d * ((n * (2 * p + (n - 1) * q)) / 2);
        ll rs = r * (p + n * q);
        ll ans = s + rs;
        cout << ans << endl;
    }

    return 0;
}
