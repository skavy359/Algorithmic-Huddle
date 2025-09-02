#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 0, temp = 0;
    for (char c : s)
    {
        if (c == 'a')
            count++;
        else
            temp++;
    }
    if (count > temp)
        cout << n << endl;
    else
    {
        int diff = temp - count + 1;
        cout << n - diff << endl;
    }
    return 0;
}