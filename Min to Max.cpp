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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here
        int mini = a[0];
        for (int i = 1; i < n; i++)
        {
            if (mini >= a[i])
            {
                mini = a[i];
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != mini)
                count++;
        }
        cout << count << endl;
    }
}
