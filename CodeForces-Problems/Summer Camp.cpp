#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 9)
    {
        cout << n << endl;
        return 0;
    }
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        ans += to_string(i);
    }
    cout << ans[n - 1] << endl;
    return 0;
}