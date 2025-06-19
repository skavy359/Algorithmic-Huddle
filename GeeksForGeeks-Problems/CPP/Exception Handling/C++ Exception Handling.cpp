// User function Template for C++

class Solution
{
public:
    int maxValue(int A, int B)
    {
        // code here
        try
        {
            if (B == 0)
            {
                throw B;
            }
            return max({(A + B), (A - B), (A * B), (A / B)});
        }
        catch (...)
        {
            return -1 * 999999;
        }
    }
};
