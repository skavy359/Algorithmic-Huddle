// O(N^2) SOLUTION
/*
#include <iostream>
#include <string>
using namespace std;

bool BeautifulYearCheck(int y)
{
    string temp = to_string(y);
    for (int i = 0; i < temp.length() - 1; i++)
    {
        for (int j = i + 1; j < temp.length(); j++)
        {
            if (temp[i] == temp[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        if (BeautifulYearCheck(y))
        {
            cout << y << endl;
            break;
        }
    }
    return 0;
}

*/

// OTHER EASY SOLUTION
#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y << endl;
            break;
        }
    }
    return 0;
}
