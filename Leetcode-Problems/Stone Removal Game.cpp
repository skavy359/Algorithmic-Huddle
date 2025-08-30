class Solution
{
public:
    bool canAliceWin(int n)
    {
        if (n < 10)
            return false;
        int i = 10;
        int turn = 1;
        while (true)
        {
            if (n - i < 0)
            {
                if (turn == 1)
                    return false;
                else if (turn == -1)
                    return true;
            }
            n -= i;
            i--;
            turn = -turn;
        }
        return true;
    }
};