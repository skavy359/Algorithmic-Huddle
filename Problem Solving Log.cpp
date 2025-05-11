#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        unordered_map<char, int> time_spent;
        for (char c : s)
        {
            time_spent[c]++;
        }

        int count = 0;

        for (auto &i : time_spent)
        {
            char problem = i.first;
            int time = (problem - 'A') + 1;
            if (i.second >= time)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}