#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int temp = n / 2;
        cout << temp << endl;
        while (temp--)
        {
            cout << "2 ";
        }
    }
    else
    {
        int temp = n / 2;
        cout << temp << endl;
        temp--;
        while (temp--)
        {
            cout << "2 ";
        }
        cout << "3";
    }
    return 0;
}