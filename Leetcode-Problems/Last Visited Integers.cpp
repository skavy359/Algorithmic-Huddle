class Solution
{
public:
    vector<int> lastVisitedIntegers(vector<int> &nums)
    {
        vector<int> seen, ans;
        int temp = 0;
        for (int i : nums)
        {
            if (i != -1)
            {
                temp = 0;
                seen.push_back(i);
            }
            else
            {
                temp++;
                if (temp <= seen.size())
                    ans.push_back(seen[seen.size() - temp]);
                else
                    ans.push_back(-1);
            }
        }
        return ans;
    }
};