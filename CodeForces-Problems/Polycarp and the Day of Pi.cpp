#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int ans = 0;
        string pi = "3141592653589793238462643383279";
        for (int i = 0; i < n.length(); i++)
        {
            if (pi[i] == n[i])
            {
                ans++;
            }
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}