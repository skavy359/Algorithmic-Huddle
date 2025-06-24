class Solution
{
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {
        int ans = 0;
        while (k > 0 && numOnes > 0)
        {
            ans++;
            k--;
            numOnes--;
        }
        while (k > 0 && numZeros > 0)
        {
            k--;
            numZeros--;
        }
        while (k > 0 && numNegOnes > 0)
        {
            ans--;
            k--;
            numNegOnes--;
        }
        return ans;
    }
};