class Solution
{
public:
    bool checkDistances(string s, vector<int> &distance)
    {
        int arr[26];
        fill(begin(arr), end(arr), -1);
        for (int i = 0; i < s.length(); i++)
        {
            if (arr[s[i] - 'a'] != -1)
            {
                if (i - 1 - arr[s[i] - 'a'] != distance[s[i] - 'a'])
                    return false;
            }
            else
            {
                arr[s[i] - 'a'] = i;
            }
        }
        return true;
    }
};