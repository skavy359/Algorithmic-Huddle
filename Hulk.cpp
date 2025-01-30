#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string temp1 = "I hate ";
    string temp2 = "I love ";

    string ans = "";
    if (n == 1)
    {
        ans += temp1;
        ans += "it";
        cout << ans << endl;
        return 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                ans += temp1;
                if (i != n)
                    ans += "that ";
            }
            else
            {
                ans += temp2;
                if (i != n)
                    ans += "that ";
            }
        }
        ans += "it";
        cout << ans << endl;
    }
    return 0;
}