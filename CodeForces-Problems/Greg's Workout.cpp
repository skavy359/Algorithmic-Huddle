#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int chest = 0;
    int biceps = 0;
    int back = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((i + 1) % 3 == 1)
        {
            chest += arr[i];
        }
        else if ((i + 1) % 3 == 2)
        {
            biceps += arr[i];
        }
        else
        {
            back += arr[i];
        }
    }
    if (chest > biceps && chest > back)
    {
        cout << "chest" << endl;
    }
    else if (biceps > chest && biceps > back)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }
    return 0;
}