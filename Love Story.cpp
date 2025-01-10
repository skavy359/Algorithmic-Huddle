#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s = "codeforces";

    while (t--)
    {
        int count = 0;
        string a;
        cin >> a;
        for (int i = 0; i < 10; i++)
        {
            if (a[i] != s[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
