class Solution
{
public:
    int minimumPushes(string word)
    {
        vector<int> arr(26, 0);
        for (char c : word)
        {
            arr[c - 'a']++;
        }
        sort(arr.rbegin(), arr.rend());
        int ans = 0;
        int cnt = 1;
        int i = 1;
        for (int x : arr)
        {
            if (x == 0)
                break;
            ans += x * i;
            cnt++;
            if (cnt == 9)
            {
                i++;
                cnt = 1;
            }
        }
        return ans;
    }
};