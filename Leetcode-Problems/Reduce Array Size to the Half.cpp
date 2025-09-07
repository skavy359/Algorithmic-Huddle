class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        priority_queue<int> pq;
        for (int i : arr)
            mp[i]++;
        int n = arr.size();
        for (auto i : mp)
            pq.push({i.second});
        int ans = 0;
        int temp = arr.size();
        while (temp > n / 2)
        {
            int top = pq.top();
            temp -= top;
            ans++;
            pq.pop();
        }
        return ans;
    }
};