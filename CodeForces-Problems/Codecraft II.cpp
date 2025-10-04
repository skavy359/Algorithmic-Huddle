#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    vector<string> mon = {"January", "February", "March", "April",
                          "May", "June", "July", "August", "September", "October",
                          "November", "December"};
    auto it = find(mon.begin(), mon.end(), s);
    int idx = it - mon.begin();
    cout << mon[(idx + k) % 12] << endl;
    return 0;
}