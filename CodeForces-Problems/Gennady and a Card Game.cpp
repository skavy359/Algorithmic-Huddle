#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;

    string arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    bool ans = false;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[j] == arr[i][j])
            {
                ans = true;
                break;
            }
        }
        if (ans)
            break;
    }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
