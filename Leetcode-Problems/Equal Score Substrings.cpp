class Solution
{
public:
    bool scoreBalance(string s)
    {
        int total = 0;
        for (char c : s)
            total += c - 'a' + 1;
        int temp = 0;
        for (char c : s)
        {
            temp += c - 'a' + 1;
            total -= (c - 'a' + 1);
            if (temp == total)
                return true;
        }
        return false;
    }
};