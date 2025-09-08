class Solution
{
public:
    vector<int> occurrencesOfElement(vector<int> &nums, vector<int> &queries,
                                     int x)
    {
        vector<int> index;
        int temp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == x)
            {
                temp++;
                index.push_back(i);
            }
        }
        vector<int> ans;
        int n = index.size();
        for (int i = 0; i < queries.size(); i++)
        {
            if (queries[i] > temp)
                ans.push_back(-1);
            else
            {
                ans.push_back(index[queries[i] - 1]);
            }
        }
        return ans;
    }
};