#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long count = (n / 15) * 3 + min(n % 15 + 1, 3LL);
        cout << count << endl;
    }
    return 0;
}