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
        int ec = 0, oc = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                ec += arr[i];
            else
                oc += arr[i];
        }
        if (ec > oc)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}