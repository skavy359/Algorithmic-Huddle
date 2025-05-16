#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ones, twos, threes;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            ones.push_back(i + 1);
        }
        else if (a == 2)
        {
            twos.push_back(i + 1);
        }
        else if (a == 3)
        {
            threes.push_back(i + 1);
        }
    }
    int low = min({ones.size(), twos.size(), threes.size()});
    cout << low << endl;
    for (int i = 0; i < low; i++)
    {
        cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
    }
    return 0;
}