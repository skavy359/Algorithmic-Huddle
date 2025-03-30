#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0, temp = 1;
    while (n >= temp)
    {
        n -= temp;
        count++;
        if (temp == 1)
            temp = 2;
        else
            temp = 1;
    }
    cout << count << endl;
    return 0;
}