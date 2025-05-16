#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> arr;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'B')
        {
            int count = 0;
            while (i < n && s[i] == 'B')
            {
                count++;
                i++;
            }
            arr.push_back(count);
        }
        else
        {
            i++;
        }
    }

    cout << arr.size() << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}