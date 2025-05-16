#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], b[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
        }
        sort(a, a + 3);
        sort(b, b + 3);
        if (a[1] + a[2] > b[1] + b[2])
        {
            cout << "Alice" << endl;
        }
        else if (a[1] + a[2] < b[1] + b[2])
        {
            cout << "Bob" << endl;
        }
        else
            cout << "Tie" << endl;
    }
    return 0;
}
