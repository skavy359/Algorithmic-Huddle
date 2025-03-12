#include <iostream>
using namespace std;

int main()
{
    long long a, b, x, y, z;
    cin >> a >> b >> x >> y >> z;
    long long total = a + b;
    long long yellow = x * 2 + y;
    long long blue = z * 3 + y;
    long long add_yellow = max(0LL, yellow - a);
    long long add_blue = max(0LL, blue - b);
    cout << add_yellow + add_blue << endl;
    return 0;
}