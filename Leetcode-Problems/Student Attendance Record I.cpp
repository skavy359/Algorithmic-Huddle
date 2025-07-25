class Solution
{
public:
    bool checkRecord(string s)
    {
        int abs = 0, late = 0;
        for (char c : s)
        {
            if (c == 'A')
            {
                abs++;
                late = 0;
            }
            else if (c == 'L')
                late++;
            else
                late = 0;
            if (late == 3 || abs >= 2)
                return false;
        }
        return true;
    }
};