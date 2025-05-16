#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    string ans = "#Black&White";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
            {
                ans = "#Color";
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}