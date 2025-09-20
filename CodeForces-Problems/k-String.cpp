#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int arr[26] = {0};
    for (char c : s)
    {
        arr[c - 'a']++;
    }
    for (int i : arr)
    {
        if (i % k != 0)
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    string ans = "", base = "";
    for (int i = 0; i < 26; i++)
    {
        base.append(arr[i] / k, char('a' + i));
    }
    for (int i = 0; i < k; i++)
    {
        ans += base;
    }
    cout << ans << endl;
    return 0;
}