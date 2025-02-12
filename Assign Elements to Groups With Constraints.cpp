class Solution
{
public:
    vector<int> assignElements(vector<int> &groups, vector<int> &elements)
    {
        int maxVal = 100000;
        vector<int> indexMap(maxVal + 1, -1);

        for (int j = 0; j < elements.size(); j++)
        {
            if (indexMap[elements[j]] == -1)
                indexMap[elements[j]] = j;
        }

        vector<int> assigned(groups.size(), -1);

        for (int i = 0; i < groups.size(); i++)
        {
            for (int divisor = 1; divisor * divisor <= groups[i]; divisor++)
            {
                if (groups[i] % divisor == 0)
                {
                    if (indexMap[divisor] != -1)
                        assigned[i] = (assigned[i] == -1) ? indexMap[divisor] : min(assigned[i], indexMap[divisor]);
                    if (groups[i] / divisor != divisor && indexMap[groups[i] / divisor] != -1)
                        assigned[i] = (assigned[i] == -1) ? indexMap[groups[i] / divisor] : min(assigned[i], indexMap[groups[i] / divisor]);
                }
            }
        }
        return assigned;
    }
};
