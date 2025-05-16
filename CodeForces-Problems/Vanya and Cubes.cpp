#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int totalCubes = 0;
    int layer = 1;
    int ans = 0;

    while (true)
    {
        int req = layer * (layer + 1) / 2;
        totalCubes += req;

        if (totalCubes <= n)
        {
            ans++;
            layer++;
        }
        else
        {
            break;
        }
    }
    cout << ans;
    return 0;
}