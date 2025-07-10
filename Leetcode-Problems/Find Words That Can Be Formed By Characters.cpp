class Solution
{
public:
    bool check(string s, int arr[])
    {
        int temp[26] = {0};
        for (char c : s)
        {
            temp[c - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (temp[i] > arr[i])
                return false;
        }
        return true;
    }

    int countCharacters(vector<string> &words, string chars)
    {
        int arr[26] = {0};
        for (char c : chars)
        {
            arr[c - 'a']++;
        }
        int ans = 0;
        for (string ch : words)
        {
            if (check(ch, arr))
            {
                ans += ch.length();
            }
        }
        return ans;
    }
};