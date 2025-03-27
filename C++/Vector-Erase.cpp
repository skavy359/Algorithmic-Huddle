#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int x;
    cin >> x;
    arr.erase(arr.begin() + x - 1);
    int a, b;
    cin >> a >> b;
    arr.erase(arr.begin() + a - 1, arr.begin() + b - 1);
    cout << arr.size() << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
