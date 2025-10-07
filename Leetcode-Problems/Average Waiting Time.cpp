class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        long long int sum = 0, temp = 0;
        int n = customers.size();
        for (int i = 0; i < n; i++)
        {
            int arrival = customers[i][0];
            int time = customers[i][1];
            temp = max(temp, (long long int)arrival) + time;
            sum += temp - arrival;
        }
        return (double)(sum) / n;
    }
};