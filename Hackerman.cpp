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
        int sum = a + b;
        bool check = false;
        for (int i = 2; i < sum; i++)
        {
            if (sum % i == 0)
            {
                check = true;
                break;
            }
        }
        if (!check || sum == 2)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
