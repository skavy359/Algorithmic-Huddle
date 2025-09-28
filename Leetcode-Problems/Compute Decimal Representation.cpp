class Solution
{
public:
    vector<int> decimalRepresentation(int n)
    {
        vector<int> ans;
        long long flag = 1;
        while (n > 0)
        {
            int rem = n % 10;
            if (rem != 0)
            {
                ans.push_back(rem * flag);
            }
            n /= 10;
            flag *= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};