#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x <= 1000)
        {
            cout << "100" << endl;
        }
        else
        {
            int answer = 0.1 * x;
            cout << answer << endl;
        }
    }
    return 0;
}
