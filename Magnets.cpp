#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        ans.push_back(a);
    }
    int res = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (ans[i] != ans[i + 1])
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
