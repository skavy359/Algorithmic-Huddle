class Solution
{
public:
    int minProcessingTime(vector<int> &processorTime, vector<int> &tasks)
    {
        sort(tasks.rbegin(), tasks.rend());
        sort(processorTime.begin(), processorTime.end());
        int ans = 0;
        for (int i = 0; i < tasks.size(); i += 4)
        {
            int temp = processorTime[i / 4] + tasks[i];
            ans = max(ans, temp);
        }
        return ans;
    }
};
