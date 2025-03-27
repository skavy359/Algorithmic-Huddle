#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        long long int arr[n];
        long long int even = 0, odd = 0, even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even += arr[i];
                even_count++;
            }
            else
            {
                odd += arr[i];
                odd_count++;
            }
        }
        while (q--)
        {
            int type, x;
            cin >> type >> x;
            if (type == 0)
            {
                even += even_count * x;
                if (x % 2 != 0)
                {
                    odd += even;
                    odd_count += even_count;
                    even = 0;
                    even_count = 0;
                }
            }
            else
            {
                odd += odd_count * x;
                if (x % 2 != 0)
                {
                    even += odd;
                    even_count += odd_count;
                    odd = 0;
                    odd_count = 0;
                }
            }
            cout << even + odd << endl;
        }
    }
    return 0;
}