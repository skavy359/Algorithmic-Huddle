#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y, z;
    int Xsum = 0, Ysum = 0, Zsum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        Xsum += x;
        Ysum += y;
        Zsum += z;
    }

    if (Xsum == 0 && Ysum == 0 && Zsum == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}