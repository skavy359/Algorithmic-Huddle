#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> rat, wom, man, cap;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (b == "rat")
            rat.push_back(a);
        else if (b == "woman" || b == "child")
            wom.push_back(a);
        else if (b == "captain")
        {
            cap.push_back(a);
        }
        else
            man.push_back(a);
    }
    for (int i = 0; i < rat.size(); i++)
        cout << rat[i] << endl;
    for (int i = 0; i < wom.size(); i++)
        cout << wom[i] << endl;
    for (int i = 0; i < man.size(); i++)
        cout << man[i] << endl;
    for (int i = 0; i < cap.size(); i++)
        cout << cap[i] << endl;
    return 0;
}