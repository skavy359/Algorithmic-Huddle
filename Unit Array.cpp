#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                neg++;
            else if (arr[i] > 0)
                pos++;
        }
        int ans = 0;
        if (neg > pos)
        {
            ans = (neg - pos + 1) / 2;
            pos += ans;
            neg -= ans;
        }
        if (neg % 2 != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}