class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        int temp1 = minutes * 6;
        int temp2 = (hour * 30) % 360;
        double temp3 = (double)(minutes * 30) / 60;
        double ans = abs(temp1 - (double)(temp2 + temp3));
        return min(ans, 360 - ans);
    }
};