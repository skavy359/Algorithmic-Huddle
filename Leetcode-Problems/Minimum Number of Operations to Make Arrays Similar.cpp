class Solution
{
public:
    long long makeSimilar(vector<int> &nums, vector<int> &target)
    {
        vector<int> odd1, even1, odd2, even2;
        for (int i : nums)
        {
            if (i % 2 != 0)
                odd1.push_back(i);
            else
                even1.push_back(i);
        }
        for (int i : target)
        {
            if (i % 2 != 0)
                odd2.push_back(i);
            else
                even2.push_back(i);
        }
        sort(odd1.begin(), odd1.end());
        sort(odd2.begin(), odd2.end());
        sort(even1.begin(), even1.end());
        sort(even2.begin(), even2.end());
        long long ans = 0;
        for (int i = 0; i < odd1.size(); i++)
        {
            ans += abs(odd1[i] - odd2[i]) / 2;
        }
        for (int i = 0; i < even1.size(); i++)
        {
            ans += abs(even1[i] - even2[i]) / 2;
        }
        return ans / 2;
    }
};