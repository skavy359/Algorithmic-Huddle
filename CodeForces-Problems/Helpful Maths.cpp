#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            temp.push_back(s[i] - '0');
        }
    }

    int count_of_plus = temp.size() - 1;
    sort(temp.begin(), temp.end());

    string ans = "";

    for (int i = 0; i < temp.size(); i++)
    {
        ans += (temp[i] + '0');
        if (count_of_plus != 0)
            ans += "+";
        count_of_plus--;
    }
    cout << ans << endl;
    return 0;
}