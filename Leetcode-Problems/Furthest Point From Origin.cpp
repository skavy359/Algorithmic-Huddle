class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int ans = 0;
        int temp = 0;
        for (char c : moves)
        {
            if (c == 'L')
                ans--;
            if (c == 'R')
                ans++;
            if (c == '_')
                temp++;
        }
        return abs(ans) + temp;
    }
};