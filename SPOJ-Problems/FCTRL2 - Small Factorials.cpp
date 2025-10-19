#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cpp_int fact = 1;
        while (n > 0)
        {
            fact *= n;
            n--;
        }
        cout << fact << endl;
    }
    return 0;
}