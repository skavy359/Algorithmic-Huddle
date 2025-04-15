class Solution
{
public:
    int maxContainers(int n, int w, int maxWeight)
    {
        int temp = maxWeight / w;
        int cargo = n * n;
        return min(temp, cargo);
    }
};