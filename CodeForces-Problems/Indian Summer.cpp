#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_set<string> st;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        st.insert(a + "#" + b);
    }
    cout << st.size() << endl;
    return 0;
}
