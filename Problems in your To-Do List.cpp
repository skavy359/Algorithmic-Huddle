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
        int count = 0;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a >= 1000)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
