class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {
        vector<int> arr;
        for (string s : timePoints)
        {
            string hour = "";
            hour += s[0];
            hour += s[1];
            string min = "";
            min += s[3];
            min += s[4];
            int ans = stoi(hour) * 60 + stoi(min);
            arr.push_back(ans);
        }
        sort(arr.begin(), arr.end());
        int res = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            res = min(res, arr[i + 1] - arr[i]);
        }
        res = min(res, 1440 - arr[arr.size() - 1] + arr[0]);
        return res;
    }
};