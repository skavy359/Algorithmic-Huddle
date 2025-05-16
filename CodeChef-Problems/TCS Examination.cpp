#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int totalDragon = a + b + c;
        int totalSloth = d + e + f;
        if (totalDragon > totalSloth)
        {
            cout << "Dragon" << endl;
        }
        else if (totalDragon < totalSloth)
        {
            cout << "Sloth" << endl;
        }
        else
        {
            if (a > d)
                cout << "Dragon" << endl;
            else if (d > a)
                cout << "Sloth" << endl;
            else
            {
                if (b > e)
                    cout << "Dragon" << endl;
                else if (e > b)
                    cout << "Sloth" << endl;
                else
                {
                    cout << "Tie" << endl;
                }
            }
        }
    }
    return 0;
}