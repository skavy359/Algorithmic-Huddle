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
        long long int product = 1;
        while (n > 0)
        {
            product *= n;
            n--;
        }
        cout << product << endl;
    }
    return 0;
}
