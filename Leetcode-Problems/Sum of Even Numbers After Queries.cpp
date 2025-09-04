class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int> &nums,
                                    vector<vector<int>> &queries)
    {
        int even = 0;
        vector<int> ans;
        for (int i : nums)
            if (i % 2 == 0)
                even += i;
        for (int i = 0; i < queries.size(); i++)
        {
            int val = queries[i][0];
            int index = queries[i][1];
            int prev = nums[index];
            nums[index] += val;
            if (nums[index] % 2 == 0)
            {
                if (prev % 2 == 0)
                {
                    even += val;
                }
                else
                {
                    even += nums[index];
                }
            }
            else
            {
                if (prev % 2 == 0)
                {
                    even -= prev;
                }
            }
            ans.push_back(even);
        }
        return ans;
    }
};