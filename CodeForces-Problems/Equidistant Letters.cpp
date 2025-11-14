#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        string block1 = "", block2 = "", singles = "";

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 2)
            {
                block1 += (char)(i + 'a');
                block2 += (char)(i + 'a');
            }
            else if (freq[i] == 1)
            {
                singles += (char)(i + 'a');
            }
        }
        cout << block1 + block2 + singles << endl;
    }
    return 0;
}
