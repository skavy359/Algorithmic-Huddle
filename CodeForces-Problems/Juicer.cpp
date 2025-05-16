#include <iostream>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int sum = 0, ans = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x <= b)
        {
            sum += x;
            if (sum > d)
            {
                ans++;
                sum = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}