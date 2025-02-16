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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int z = 0; z < x; z++)
            {
                char ch;
                cin >> ch;
                if (ch == 'D')
                {
                    arr[i]++;
                }
                else if (ch == 'U')
                {
                    arr[i]--;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] % 10;
            if (arr[i] < 0)
            {
                cout << arr[i] + 10 << " ";
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}