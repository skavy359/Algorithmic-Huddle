class Solution
{
public:
    vector<int> closestDivisors(int num)
    {
        long long int a = num + 1, b = num + 2;
        int first = 0, second = 0, third = 0, four = 0;
        for (int i = 1; i * i <= a; i++)
        {
            int rem = a / i;
            if (i * rem == a)
            {
                first = i;
                second = rem;
            }
        }
        for (int i = 1; i * i <= b; i++)
        {
            int rem = b / i;
            if (i * rem == b)
            {
                third = i;
                four = rem;
            }
        }
        if (abs(first - second) < abs(third - four))
        {
            return {first, second};
        }
        else
        {
            return {third, four};
        }
    }
};