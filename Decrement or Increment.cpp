#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t % 4 == 0)
    {
        t++;
    }
    else
    {
        t--;
    }
    cout << t << endl;
    return 0;
}
