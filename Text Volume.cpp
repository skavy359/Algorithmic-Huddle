#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    int ans = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            count++;
        if (s[i] == ' ' || i == n - 1)
        {
            ans = max(ans, count);
            count = 0;
        }
    }

    cout << ans << endl;
    return 0;
}