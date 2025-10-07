class Solution
{
public:
    string resultingString(string s)
    {
        // stack<int> st;
        // for (char c : s) {
        //     int id = c - 'a';
        //     if (!st.empty() &&
        //         (abs(id - st.top()) == 1 || abs(id - st.top()) == 25)) {
        //         st.pop();
        //         continue;
        //     }
        //     st.push(id);
        // }
        // string ans = "";
        // while (!st.empty()) {
        //     ans += st.top() + 'a';
        //     st.pop();
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;

        string ans = "";
        for (char c : s)
        {
            if (!ans.empty())
            {
                int diff = abs(c - ans.back());
                if (diff == 1 || diff == 25)
                {
                    ans.pop_back();
                    continue;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};