class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        set<double> st;
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            int mini = nums[i];
            int maxi = nums[j];
            double average = (mini + maxi) / 2.0;
            st.insert(average);
            i++;
            j--;
        }
        return st.size();
    }
};