#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int rem = n % k;
    cout << n + (k - rem) << endl;
    return 0;
}