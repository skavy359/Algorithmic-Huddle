#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int day = 0;
    while (sum < n)
    {
        sum += arr[day];
        day = (day + 1) % 7;
    }
    cout << (day == 0 ? 7 : day) << endl;
    return 0;
}