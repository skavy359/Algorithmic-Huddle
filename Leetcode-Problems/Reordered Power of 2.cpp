class Solution
{
public:
    string countDigits(int x)
    {
        string s = to_string(x);
        sort(s.begin(), s.end());
        return s;
    }
    bool reorderedPowerOf2(int n)
    {
        string target = countDigits(n);
        for (int i = 0; i < 31; i++)
        {
            if (countDigits(1 << i) == target)
                return true;
        }
        return false;
    }
};