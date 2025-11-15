#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        vector<long long> candidates = {a1 + a2, a4 - a2, a5 - a4};

        int best = 0;

        for (long long x : candidates)
        {
            int cnt = 0;
            if (x == a1 + a2)
                cnt++;
            if (a4 == a2 + x)
                cnt++;
            if (a5 == x + a4)
                cnt++;
            best = max(best, cnt);
        }

        cout << best << "\n";
    }
    return 0;
}
