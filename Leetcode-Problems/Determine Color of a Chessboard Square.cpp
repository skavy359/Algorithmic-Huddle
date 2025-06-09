class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        int ans = (coordinates[0] - '0') + (coordinates[1] - '0');
        return ans % 2;
    }
};