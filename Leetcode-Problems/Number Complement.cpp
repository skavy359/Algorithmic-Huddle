class Solution
{
public:
    int findComplement(int n)
    {
        if (n == 0)
            return 1;
        int ans = 0, i = 0;
        while (n > 0)
        {
            int bit = n & 1;
            if (bit)
                bit = 0;
            else
                bit = 1;
            ans |= (bit << i);
            i++;
            n = n >> 1;
        }
        return ans;
    }
};