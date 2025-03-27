#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define RESULT(n, arr, ans, minAns) \
    ans = arr[0];                   \
    minAns = arr[0];                \
    for (int i = 1; i < n; i++)     \
    {                               \
        if (arr[i] > ans)           \
            ans = arr[i];           \
        else if (arr[i] < minAns)   \
            minAns = arr[i];        \
    }
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans, minAns;
    RESULT(n, arr, ans, minAns);
    cout << "Result = " << ans - minAns << endl;
    return 0;
}
