#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int count = 0;
        while (true)
        {
            if (x >= y)
            {
                cout << count << endl;
                break;
            }
            else
            {
                x += 8;
                count++;
            }
        }
    }
    return 0;
}
