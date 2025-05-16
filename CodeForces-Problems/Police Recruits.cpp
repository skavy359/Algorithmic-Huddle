#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            if (sum > 0)
            {
                sum--;
            }
            else
            {
                number++;
            }
        }
        else
        {
            sum += arr[i];
        }
    }
    cout << number << endl;
    return 0;
}