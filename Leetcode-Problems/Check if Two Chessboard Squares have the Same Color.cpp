class Solution
{
    public:
        bool checkTwoChessboards(string coordinate1, string coordinate2)
        {
            int ans1 = (coordinate1[0] - '0') + (coordinate1[1] - '0');
            int ans2 = (coordinate2[0] - '0') + (coordinate2[1] - '0');
            if (ans1 % 2 == ans2 % 2)
                return true;
            return false;
    }
};