class Solution
{
public:
    bool nonCoPrime(int a, int b) { return __gcd(a, b) > 1; }

    vector<int> replaceNonCoprimes(vector<int> &nums)
    {
        stack<int> st;
        for (int i : nums)
        {
            int temp = i;
            while (!st.empty() && nonCoPrime(st.top(), temp))
            {
                temp = lcm(st.top(), temp);
                st.pop();
            }
            st.push(temp);
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};