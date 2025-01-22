#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        int count = 0;
        if (diff)
        {
            int rem = diff % 10;
            count += (diff / 10);
            if (rem != 0)
                count++;
        }
        cout << count << endl;
    }
}