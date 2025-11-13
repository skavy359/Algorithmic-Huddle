#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c25 = 0, c50 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 25)
        {
            c25++;
        }
        else if (arr[i] == 50)
        {
            if (c25 > 0)
            {
                c25--;
                c50++;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (arr[i] == 100)
        {
            if (c50 > 0 && c25 > 0)
            {
                c50--;
                c25--;
            }
            else if (c50 == 0 && c25 >= 3)
            {
                c25 -= 3;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}