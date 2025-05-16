#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2 * n];

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> counts;
        bool valid = true;

        for (int i = 0; i < 2 * n; i++)
        {
            counts[arr[i]]++;
            if (counts[arr[i]] > 2)
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
