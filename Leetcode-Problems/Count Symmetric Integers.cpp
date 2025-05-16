class Solution
{
public:
    int countSymmetricIntegers(int low, int high)
    {
        int count = 0;
        for (int i = low; i <= high; i++)
        {
            string temp = to_string(i);
            int n = temp.length();
            if (n % 2 != 0)
                continue;
            int sum_first = 0;
            int sum_last = 0;
            for (int j = 0; j < n / 2; j++)
            {
                sum_first += temp[j] - '0';
            }
            for (int j = n / 2; j < n; j++)
            {
                sum_last += temp[j] - '0';
            }
            if (sum_first == sum_last)
                count++;
        }
        return count;
    }
};