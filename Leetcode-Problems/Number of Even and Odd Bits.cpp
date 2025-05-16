class Solution
{
public:
    vector<int> evenOddBit(int n)
    {
        int even = 0, odd = 0;
        int i = 0;
        while (n > 0)
        {
            int temp = n & 1;
            if (temp == 1)
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
            n = n >> 1;
            i++;
        }
        return {even, odd};
    }
};