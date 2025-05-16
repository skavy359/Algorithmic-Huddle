#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 1;
    int increment = 1;
    for (int i = 0; i < n - 1; i++)
    {
        temp = (temp + increment) % n;
        if (temp == 0)
        {
            temp = n;
        }
        cout << temp << " ";
        increment++;
    }
    return 0;
}