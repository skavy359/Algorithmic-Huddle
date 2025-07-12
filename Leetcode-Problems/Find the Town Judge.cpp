class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        if (n == 1 && trust.size() == 0)
            return 1;
        vector<int> temp(n + 1);
        for (auto i : trust)
        {
            temp[i[0]]--;
            temp[i[1]]++;
        }
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == n - 1)
                return i;
        }
        return -1;
    }
};