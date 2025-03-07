class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int count = 0, temp;
        if (ruleKey == "type")
            temp = 0;
        else if (ruleKey == "color")
            temp = 1;
        else if (ruleKey == "name")
            temp = 2;
        for (int i = 0; i < items.size(); i++)
        {
            if (items[i][temp] == ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};