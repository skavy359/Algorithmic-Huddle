#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll nums[] = {
        2, 3, 4, 5, 6, 8, 12, 30, 32, 33, 34, 35, 36, 38,
        40, 42, 43, 44, 45, 46, 48, 50, 52, 53, 54, 55,
        56, 58, 60, 62, 63, 64, 65, 66, 68, 80, 82, 83,
        84, 85, 86, 88};

    ll n;
    cin >> n;

    for (ll i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        if (nums[i] == n)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
