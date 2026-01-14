class Solution
{
public:
    int residuePrefixes(string s)
    {
        unordered_set<char> st;
        int ans = 0, count = 0;
        for (char c : s)
        {
            st.insert(c);
            count++;
            if (st.size() == (count % 3))
                ans++;
        }
        return ans;
    }
};