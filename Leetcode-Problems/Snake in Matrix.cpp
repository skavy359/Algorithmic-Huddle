class Solution
{
public:
    int finalPositionOfSnake(int n, vector<string> &commands)
    {
        int value = 0;
        for (string s : commands)
        {
            if (s == "UP")
            {
                value -= n;
            }
            else if (s == "DOWN")
            {
                value += n;
            }
            else if (s == "RIGHT")
            {
                value += 1;
            }
            else if (s == "LEFT")
            {
                value -= 1;
            }
        }
        return value;
    }
};