class Solution
{
public:
    int countBalls(int lowLimit, int highLimit)
    {
        vector<int> arr(46, 0);
        for (int i = lowLimit; i <= highLimit; i++)
        {
            int digits = 0;
            int temp = i;
            while (temp > 0)
            {
                digits += temp % 10;
                temp /= 10;
            }
            arr[digits]++;
        }
        int maxi = INT_MIN;
        for (int i = 0; i < 46; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
            }
        }
        return maxi;
    }
};