#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string W;
        cin >> W;
        string plural = "";
        for (int i = 0; i < W.length() - 2; i++)
        {
            plural += W[i];
        }
        plural += 'i';
        cout << plural << endl;
    }
    return 0;
}