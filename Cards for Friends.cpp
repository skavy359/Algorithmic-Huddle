#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;

        int count = 1;
        while (w % 2 == 0)
        {
            count *= 2;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            count *= 2;
            h = h / 2;
        }
        if (count >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
