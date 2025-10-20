#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int men[n];
    for (int i = 0; i < n; i++)
    {
        cin >> men[i];
    }
    sort(men, men + n);
    for (int i = 0; i < n; i++)
    {
        cout << men[i] << " ";
    }
    return 0;
}