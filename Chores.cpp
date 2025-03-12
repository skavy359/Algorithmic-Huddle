#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int petya = arr[n - a];
    int vasya = arr[n - a - 1];
    cout << max(0, petya - vasya) << endl;
    return 0;
}