class Solution
{
public:
    int countLargestGroup(int n)
    {
        vector<int> arr(37, 0);
        for (int i = 1; i <= n; i++)
        {
            int temp = i, sum = 0;
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            arr[sum]++;
        }
        int maxi = *max_element(arr.begin(), arr.end());
        int ans = 0;
        for (int i : arr)
        {
            if (i == maxi)
                ans++;
        }
        return ans;
    }
};