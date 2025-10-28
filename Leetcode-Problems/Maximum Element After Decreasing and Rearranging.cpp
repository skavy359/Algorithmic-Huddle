class Solution
{
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int maxi = 1;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > maxi)
            {
                maxi++;
            }
        }
        return maxi;
    }
};