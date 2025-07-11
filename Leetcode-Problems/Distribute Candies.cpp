class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        int n = candyType.size() / 2;
        unordered_map<int, int> mp;
        for (int i : candyType)
            mp[i]++;
        int m = mp.size();
        int ans = min(m, n);
        return ans;
    }
};