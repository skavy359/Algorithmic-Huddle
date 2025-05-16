#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int n = input.length();
    if (n < 7)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i <= n - 7; i++)
    {
        bool is_dangerous = true;
        for (int j = i + 1; j < i + 7; j++)
        {
            if (input[i] != input[j])
            {
                is_dangerous = false;
                break;
            }
        }
        if (is_dangerous)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}