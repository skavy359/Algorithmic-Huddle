#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int m = 1;
    while (true)
    {
        if (!check((n * m) + 1))
        {
            cout << m << endl;
            return 0;
        }
        else
        {
            m++;
        }
    }
    return 0;
}