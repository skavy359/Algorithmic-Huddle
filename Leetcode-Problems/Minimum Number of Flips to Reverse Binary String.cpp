class Solution
{
public:
    int minimumFlips(int n)
    {
        string ans1 = " ";
        while (n > 0)
        {
            int rem = n % 2;
            ans1 += rem + '0';
            n /= 2;
        }
        string ans2 = " ";
        for (int i = ans1.size() - 1; i >= 0; i--)
        {
            ans2 += ans1[i];
        }
        int ans = 0;
        for (int i = 0; i < ans1.size(); i++)
        {
            if (ans1[i] != ans2[i])
            {
                ans++;
            }
        }
        return ans;
    }
};