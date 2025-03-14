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
        if (x < 4)
        {
            cout << "MILD" << endl;
        }
        else if (x >= 7)
        {
            cout << "HOT" << endl;
        }
        else
        {
            cout << "MEDIUM" << endl;
        }
    }
    return 0;
}
