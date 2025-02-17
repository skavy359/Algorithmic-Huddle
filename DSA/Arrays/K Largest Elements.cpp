class Solution
{
public:
    vector<int> kLargest(vector<int> &arr, int k)
    {
        // Your code here
        vector<int> ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[arr.size() - 1 - i]);
        }
        return ans;
    }
};