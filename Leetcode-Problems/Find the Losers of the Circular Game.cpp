class Solution
{
public:
    vector<int> circularGameLosers(int n, int k)
    {
        vector<bool> temp(n, false);
        int i = 0, j = 1;
        while (true)
        {
            if (temp[i])
                break;
            temp[i] = true;
            i = (i + k * j) % n;
            j++;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (!temp[i])
                ans.push_back(i + 1);
        }
        return ans;
    }
};