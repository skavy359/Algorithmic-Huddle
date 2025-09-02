class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string st;
        for (char c : num)
        {
            while (!st.empty() && k > 0 && st.back() > c)
            {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        while (!st.empty() && k > 0)
        {
            st.pop_back();
            k--;
        }
        int index = 0;
        while (index < st.length() && st[index] == '0')
            index++;
        string ans = st.substr(index);
        if (ans.empty())
            return "0";
        return ans;
    }
};
