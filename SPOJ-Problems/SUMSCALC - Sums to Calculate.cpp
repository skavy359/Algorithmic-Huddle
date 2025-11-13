#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long S = n * (n + 1) / 2;
        long long Seven = n * (n + 1);
        long long Sodd = n * n;
        long long Ssquares = n * (n + 1) * (2 * n + 1) / 6;
        long long Scubes = S * S;

        cout << S << " " << Seven << " " << Sodd << " " << Ssquares << " " << Scubes << endl;
    }
    return 0;
}
