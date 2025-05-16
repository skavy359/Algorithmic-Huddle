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
        set<int> set1(a, a + n);
        auto it = set1.rbegin();
        int first = *it;
        ++it;
        int second = *it;
        cout << first + second << endl;
    }
}
