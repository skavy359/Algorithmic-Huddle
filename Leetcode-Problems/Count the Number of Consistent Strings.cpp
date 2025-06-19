class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int arr[26] = {0};
        for (char c : allowed)
        {
            arr[c - 'a'] = 1;
        }
        int ans = 0;
        for (string s : words)
        {
            bool flag = true;
            for (char c : s)
            {
                if (arr[c - 'a'] == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans++;
        }
        return ans;
    }
};