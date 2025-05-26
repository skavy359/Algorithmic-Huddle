#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int top = (a ^ b) && (c || d);
    int bottom = (b && c) || (a ^ d);
    int final = top ^ bottom;
    cout << final << endl;
    return 0;
}