// B - Valentine Couples

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
        int boysHeight[n], girlsHeight[n];
        for (int i = 0; i < n; i++)
        {
            cin >> boysHeight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> girlsHeight[i];
        }
        sort(boysHeight, boysHeight + n);
        sort(girlsHeight, girlsHeight + n, greater<int>());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = max(sum, (boysHeight[i] + girlsHeight[i]));
        }
        cout << sum << endl;
    }
    return 0;
}