class Solution
{
public:
    int bestClosingTime(string customers)
    {
        int sum = 0;
        for (char c : customers)
        {
            if (c == 'Y')
                sum++;
        }
        int khushi = 0;
        int mini = sum;
        for (int i = 0; i < customers.size(); i++)
        {
            if (customers[i] == 'Y')
            {
                sum--;
            }
            else if (customers[i] == 'N')
            {
                sum++;
            }
            if (sum < mini)
            {
                mini = sum;
                khushi = i + 1;
            }
        }
        return khushi;
    }
};