class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        // vector<int> ans;
        // unordered_map<int, int> temp;
        // for (int i : nums) {
        //     temp[i]++;
        //     if (temp[i] > 1) {
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = abs(nums[i]) - 1;
            if (nums[temp] < 0)
            {
                ans.push_back(abs(nums[i]));
            }
            else
            {
                nums[temp] = -nums[temp];
            }
        }
        return ans;
    }
};