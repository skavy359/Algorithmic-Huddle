class Solution
{
public:
    int wateringPlants(vector<int> &plants, int capacity)
    {
        int steps = 0;
        int init = capacity;
        for (int i = 0; i < plants.size(); i++)
        {
            if (plants[i] <= capacity)
            {
                capacity -= plants[i];
                steps++;
            }
            else
            {
                steps += i * 2;
                steps++;
                capacity = init;
                capacity -= plants[i];
            }
        }
        return steps;
    }
};