#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int sum_of_first = 0, sum_of_last = 0;
        for (int i = 0; i < 3; i++)
        {
            sum_of_first += (a[i] - '0');
        }
        for (int i = 3; i < 6; i++)
        {
            sum_of_last += (a[i] - '0');
        }
        if (sum_of_first == sum_of_last)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}