#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_of_zero = 0, count_of_ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count_of_zero++;
        else
            count_of_ones++;
    }
    cout << abs(count_of_ones - count_of_zero) << endl;
    return 0;
}