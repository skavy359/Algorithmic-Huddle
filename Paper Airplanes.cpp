#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    int sheetsPerPerson = (n + s - 1) / s;
    int total = k * sheetsPerPerson;
    int answer = (total + p - 1) / p;
    cout << answer << endl;
    return 0;
}