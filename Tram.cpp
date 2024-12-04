#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 0;
    int cur = 0;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cur = cur - a;
        cur = cur + b;
        if (cur > max)
        {
            max = cur;
        }
    }

    cout << max;
    return 0;
}
