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
        string arr[n];
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == "START38")
                a++;
            else
                b++;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
