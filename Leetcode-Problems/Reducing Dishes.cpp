class Solution
{
public:
    int maxSatisfaction(vector<int> &satisfaction)
    {
        int ans = 0;
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        int temp = 0;
        for (int i : satisfaction)
        {
            temp += i;
            if (temp < 0)
                return ans;
            ans += temp;
        }
        return ans;
    }
};