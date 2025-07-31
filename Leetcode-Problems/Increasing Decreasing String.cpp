class Solution
{
public:
    string sortString(string s)
    {
        int arr[26] = {0};
        for (char c : s)
        {
            arr[c - 'a']++;
        }
        string result = "";
        while (s.size() != result.size())
        {
            for (int i = 0; i < 26; i++)
            {
                if (arr[i] != 0)
                {
                    result += i + 'a';
                    arr[i]--;
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                if (arr[i] != 0)
                {
                    result += i + 'a';
                    arr[i]--;
                }
            }
        }
        return result;
    }
};