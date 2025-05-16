#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int w = 0;
    int l1 = 0, l2 = 0;
    int maxlead = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        l1 += a;
        l2 += b;
        int diff = l1 - l2;
        int temp = abs(diff);
        if (temp > maxlead)
        {
            maxlead = temp;
            w = (l1 > l2) ? 1 : 2;
        }
    }
    cout << w << " " << maxlead << endl;
    return 0;
}
