#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    while (n--)
    {
        int count = 0;
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
            count++;
        if (b == 1)
            count++;
        if (c == 1)
            count++;

        if (count >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
