class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start,
                                int destination)
    {
        if (start > destination)
            swap(start, destination);
        int clock = 0, anticlock;
        int total = accumulate(distance.begin(), distance.end(), 0);
        for (int i = 0; i < distance.size(); i++)
        {
            if (i >= start && i < destination)
                clock += distance[i];
        }
        anticlock = total - clock;
        return min(clock, anticlock);
    }
};