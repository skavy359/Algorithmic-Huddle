#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int arr[n], time[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }
    int limak = 0, radewoosh = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        total += time[i];
        limak += max(0, arr[i] - (c * total));
    }
    total = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        total += time[i];
        radewoosh += max(0, arr[i] - (c * total));
    }
    if (limak > radewoosh)
        cout << "Limak" << endl;
    else if (limak < radewoosh)
        cout << "Radewoosh" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}