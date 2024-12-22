#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        int fw, sw;

        if (arr[0] > arr[1])
            fw = arr[0];
        else
            fw = arr[1];
        if (arr[2] > arr[3])
            sw = arr[2];
        else
            sw = arr[3];

        sort(arr, arr + 4);
        int max1 = arr[3];
        int max2 = arr[2];

        if ((fw == max1 && sw == max2) || (fw == max2 && sw == max1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
