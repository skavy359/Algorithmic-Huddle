class Solution
{
public:
    int generateKey(int num1, int num2, int num3)
    {
        int ans = 0, temp = 1;
        while (num1 && num2 && num3)
        {
            int mini = min({num1 % 10, num2 % 10, num3 % 10});
            ans += mini * temp;
            temp *= 10;
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
        }
        return ans;
    }
};