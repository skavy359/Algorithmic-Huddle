class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int n = tickets.size();
        int i = 0;
        int time = 0;
        while (true)
        {
            if (tickets[k] == 0)
                return time;
            if (tickets[i % n] > 0)
            {
                tickets[i % n]--;
                time++;
            }
            i++;
        }
        return 1;
    }
};