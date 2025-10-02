#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    x = abs(x);
    if (x == 0)
    {
        cout << "0" << endl;
        return 0;
    }

    long long k = 0, sum = 0;
    while (true)
    {
        k++;
        sum += k;
        if (sum >= x && (sum - x) % 2 == 0)
        {
            cout << k << endl;
            break;
        }
    }
    return 0;
}