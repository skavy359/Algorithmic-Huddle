#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        int temp = (p + q) % 4;
        switch (temp)
        {
        case 0:
        case 1:
            cout << "Alice" << endl;
            break;

        case 2:
        case 3:
            cout << "Bob" << endl;
            break;
        }
    }
    return 0;
}
