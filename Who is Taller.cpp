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
        if (x < y)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }
    return 0;
}
