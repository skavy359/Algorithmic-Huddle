class Solution
{
public:
    int pivotInteger(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        bool check = false;
        int left = 0;
        int ans;
        for (int i = 1; i <= n; i++)
        {
            left += i;
            if (sum - left + i == left)
            {
                check = true;
                ans = i;
                break;
            }
        }
        if (check)
        {
            return ans;
        }
        return -1;
    }
};