#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> elems = {
        "h", "he", "li", "be", "b", "c", "n", "o", "f", "ne", "na", "mg", "al", "si", "p", "s", "cl", "ar",
        "k", "ca", "sc", "ti", "v", "cr", "mn", "fe", "co", "ni", "cu", "zn", "ga", "ge", "as", "se", "br", "kr",
        "rb", "sr", "y", "zr", "nb", "mo", "tc", "ru", "rh", "pd", "ag", "cd", "in", "sn", "sb", "te", "i", "xe",
        "cs", "ba", "la", "ce", "pr", "nd", "pm", "sm", "eu", "gd", "tb", "dy", "ho", "er", "tm", "yb", "lu",
        "hf", "ta", "w", "re", "os", "ir", "pt", "au", "hg", "tl", "pb", "bi", "po", "at", "rn", "fr", "ra",
        "ac", "th", "pa", "u", "np", "pu", "am", "cm", "bk", "cf", "es", "fm", "md", "no", "lr", "rf", "db",
        "sg", "bh", "hs", "mt", "ds", "rg", "cn", "fl", "lv", "ts", "og"};

    unordered_set<string> st(elems.begin(), elems.end());

    string s;
    cin >> s;

    for (auto &ch : s)
        ch = tolower(ch);

    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++)
    {
        if (!dp[i])
            continue;
        if (st.count(s.substr(i, 1)))
            dp[i + 1] = true;
        if (i + 1 < n && st.count(s.substr(i, 2)))
            dp[i + 2] = true;
    }

    cout << (dp[n] ? "YES" : "NO") << "\n";
    return 0;
}
