#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        string b;
        cin >> b;
        int ans = 0;
        for (int i = 0; i < a; i++)
        {
            if ((b[i] - 'a' + 1) > ans)
            {
                ans = (b[i] - 'a' + 1);
            }
        }
        cout << ans << endl;
    }
}
