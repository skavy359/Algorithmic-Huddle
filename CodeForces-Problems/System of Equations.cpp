#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    int small = (n > m) ? m : n;

    for (int a = 0; a <= small; a++)
    {
        for (int b = 0; b <= small; b++)
        {
            if ((a * a) + b == n && a + (b * b) == m)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}