#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int hour = (s[0] - '0') * 10 + (s[1] - '0');
        if (hour == 0)
        {
            s[0] = '1';
            s[1] = '2';
            cout << s << " AM" << endl;
        }
        else if (hour == 12)
        {
            cout << s << " PM" << endl;
        }
        else if (hour < 12)
        {
            cout << s << " AM" << endl;
        }
        else
        {
            hour -= 12;
            s[0] = (hour / 10) + '0';
            s[1] = (hour % 10) + '0';
            cout << s << " PM" << endl;
        }
    }
    return 0;
}
