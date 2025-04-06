#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int totalA = 0, totalB = 0;
    int sumA = 0, sumB = 0;
    while (n--)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
        {
            sumA += x;
            totalA += 10;
        }
        else if (t == 2)
        {
            sumB += x;
            totalB += 10;
        }
    }
    if (sumA >= totalA / 2)
    {
        cout << "LIVE" << endl;
    }
    else
    {
        cout << "DEAD" << endl;
    }
    if (sumB >= totalB / 2)
    {
        cout << "LIVE" << endl;
    }
    else
    {
        cout << "DEAD" << endl;
    }
    return 0;
}