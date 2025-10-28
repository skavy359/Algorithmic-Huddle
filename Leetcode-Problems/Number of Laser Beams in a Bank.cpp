class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        vector<int> count;
        for (string s : bank)
        {
            int temp = 0;
            for (char c : s)
            {
                if (c == '1')
                    temp++;
            }
            if (temp != 0)
                count.push_back(temp);
        }
        if (count.size() == 0)
            return 0;
        int ans = 0;
        for (int i = 0; i < count.size() - 1; i++)
        {
            ans += count[i] * count[i + 1];
        }
        return ans;
    }
};