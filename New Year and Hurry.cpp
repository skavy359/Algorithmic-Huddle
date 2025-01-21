#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int target = 240 - k;

    int sum = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * 5;
        if (sum <= target)
        {
            ans++;
        }
        else
            break;
    }
    cout << ans << endl;
    return 0;
}