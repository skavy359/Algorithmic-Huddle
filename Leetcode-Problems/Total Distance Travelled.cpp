class Solution
{
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {
        if (mainTank < 5)
            return mainTank * 10;
        int ans = 0;
        while (mainTank >= 5 && additionalTank >= 1)
        {
            ans += 50;
            mainTank = mainTank - 5 + 1;
            additionalTank -= 1;
        }
        ans += (mainTank * 10);
        return ans;
    }
};