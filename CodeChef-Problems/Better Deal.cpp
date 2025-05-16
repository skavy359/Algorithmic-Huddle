#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int first = 100 - a;
        int second = 200 - (2 * b);
        if (first < second)
        {
            cout << "FIRST" << endl;
        }
        else if (second < first)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
    }
    return 0;
}
