#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr;
    arr.push_back(a), arr.push_back(b), arr.push_back(c);
    sort(arr.begin(), arr.end());
    if (arr[2] - arr[0] < 10)
    {
        cout << "final " << arr[1] << endl;
    }
    else
    {
        cout << "check again" << endl;
    }
    return 0;
}