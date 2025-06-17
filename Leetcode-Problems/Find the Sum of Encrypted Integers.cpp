class Solution
{
public:
    int sumOfEncryptedInt(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            string temp = to_string(nums[i]);
            char maxi = *max_element(temp.begin(), temp.end());
            string encr(temp.length(), maxi);
            ans += stoi(encr);
        }
        return ans;
    }
};