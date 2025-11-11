class Solution
{
public:
    int minDeletions(string s)
    {
        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;
        sort(freq.begin(), freq.end());
        unordered_set<int> st;
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0 && !st.count(freq[i]))
            {
                st.insert(freq[i]);
            }
            else if (st.count(freq[i]))
            {
                while (st.count(freq[i]))
                {
                    freq[i]--;
                    count++;
                }
                if (freq[i] != 0)
                    st.insert(freq[i]);
            }
        }
        return count;
    }
};