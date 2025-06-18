class Solution
{
public:
    int binaryToDecimal(string &b)
    {
        // Code here.
        int j = 0;
        int ans = 0;
        for (int i = b.length() - 1; i >= 0; i--)
        {
            ans += (b[i] - '0') * pow(2, j);
            j++;
        }
        return ans;
    }
}; 