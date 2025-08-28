#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1;
    int pick, sereja = 0, dima = 0;
    bool turn = true;
    while (l <= r)
    {
        if (arr[l] > arr[r])
        {
            pick = arr[l];
            l++;
        }
        else
        {
            pick = arr[r];
            r--;
        }
        if (turn)
            sereja += pick;
        else
            dima += pick;
        turn = !turn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}