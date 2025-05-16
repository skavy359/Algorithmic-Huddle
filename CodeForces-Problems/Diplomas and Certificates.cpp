#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long diploma = n / (2 * (k + 1));
    long long certificates = k * diploma;
    long long losers = n - diploma - certificates;
    cout << diploma << " " << certificates << " " << losers << endl;
    return 0;
}