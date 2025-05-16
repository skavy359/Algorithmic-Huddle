#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = -1;
        if ((n % 10) % 2 == 0)
        {
            ans = 0;
        }
        else
        {
            string temp = to_string(n);
            int index = -1;
            bool found = false;
            for (int i = 0; i < temp.length(); i++)
            {
                if ((temp[i] - '0') % 2 == 0)
                {
                    index = i;
                    found = true;
                    break;
                }
            }
            if (found)
            {
                if (index == 0)
                {
                    ans = 1;
                }
                else
                {
                    ans = 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}