class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char fir : s)
        {
            st.push(fir);
            if (st.size() >= 3)
            {
                char c1 = st.top();
                st.pop();
                char c2 = st.top();
                st.pop();
                char c3 = st.top();
                st.pop();
                if (c3 != 'a' || c2 != 'b' || c1 != 'c')
                {
                    st.push(c3);
                    st.push(c2);
                    st.push(c1);
                }
            }
        }
        return st.empty();
    }
};