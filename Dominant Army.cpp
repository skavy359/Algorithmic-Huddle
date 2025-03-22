#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c > a + b or b > a + c or a > b + c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
