#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int temp = min(a, min(b / 2, c / 4));
    cout << temp * 7 << endl;
    return 0;
}