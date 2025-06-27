// User function Template for C++

char extraChar(string &s1, string &s2)
{
    unordered_map<char, int> mp;
    for (char c : s1)
        mp[c]++;
    for (char c : s2)
        mp[c]--;
    for (auto i : mp)
    {
        if (i.second != 0)
        {
            return i.first;
        }
    }
}