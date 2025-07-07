class Solution
{
public:
    int minNumber(vector<int> &nums1, vector<int> &nums2)
    {
        int arr[10] = {0};
        for (int i : nums1)
            arr[i]++;
        for (int i : nums2)
            arr[i]++;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int temp1 = min(nums1[0], nums2[0]);
        int temp2 = max(nums1[0], nums2[0]);
        for (int i = 1; i <= 9; i++)
        {
            if (arr[i] == 2)
                return i;
        }
        return temp1 * 10 + temp2;
    }
};