#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;
    string maxi = "", mini = "";
    if ((s == 0 && m > 1) || (s > 9 * m))
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    if (s == 0 && m == 1)
    {
        cout << "0 0" << endl;
        return 0;
    }

    int sum = s;
    for (int i = 0; i < m; i++)
    {
        maxi += (min(9, sum) + '0');
        sum -= min(9, sum);
    }

    sum = s;
    for (int i = 0; i < m; i++)
    {
        int remaining = m - i - 1;
        for (int d = 0; d <= 9; d++)
        {
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && sum - d >= 0 && sum - d <= 9 * remaining)
            {
                mini += (d + '0');
                sum -= d;
                break;
            }
        }
    }

    cout << mini << " " << maxi << endl;
    return 0;
}