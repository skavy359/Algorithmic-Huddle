#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans = ans + (arr[i] * (i + 1));
    }
    cout << ans << endl;
    return 0;
}