class Solution
{
public:
    bool checkOnesSegment(string s)
    {
        int count = 0, temp = 0;
        for (char c : s)
        {
            if (c == '1')
                temp++;
            else
            {
                if (temp != 0)
                    count++;
                temp = 0;
            }
            if (count > 1)
                return false;
        }
        if (temp != 0 && count == 1)
            return false;
        return true;
    }
};