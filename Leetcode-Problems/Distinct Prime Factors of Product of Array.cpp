class Solution
{
public:
    int distinctPrimeFactors(vector<int> &nums)
    {
        unordered_set<int> st;
        for (int i : nums)
        {
            int temp = i;
            for (int j = 2; j * j <= temp; j++)
            {
                while (temp % j == 0)
                {
                    st.insert(j);
                    temp /= j;
                }
            }
            if (temp > 1)
                st.insert(temp);
        }
        return st.size();
    }
};