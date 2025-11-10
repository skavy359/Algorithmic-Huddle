class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        unordered_map<int, int> mp;
        for (int i : tasks)
            mp[i]++;
        int count = 0;
        for (auto &i : mp)
        {
            if (i.second == 1)
                return -1;
            count += i.second / 3;
            if (i.second % 3 != 0)
                count++;
        }
        return count;
    }
};