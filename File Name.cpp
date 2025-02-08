#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'x')
        {
            if (s[i + 1] == 'x')
            {
                if (s[i + 2] == 'x')
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}