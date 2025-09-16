class Solution
{
public:
    double calculateTax(vector<vector<int>> &brackets, int income)
    {
        double ans = 0.00;
        int prev = 0;
        for (int i = 0; i < brackets.size(); i++)
        {
            int upper = brackets[i][0];
            double percent = (double)brackets[i][1] / 100;
            if (income >= upper)
            {
                ans += (upper - prev) * percent;
                prev = upper;
            }
            else
            {
                ans += (income - prev) * percent;
                break;
            }
        }
        return ans;
    }
};