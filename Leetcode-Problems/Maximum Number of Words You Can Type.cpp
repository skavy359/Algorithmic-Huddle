class Solution
{
public:
    int canBeTypedWords(string text, string brokenLetters)
    {
        int arr[26] = {0};
        vector<string> temp;
        for (char c : brokenLetters)
        {
            arr[c - 'a'] = -1;
        }
        stringstream s(text);
        string word;
        while (s >> word)
        {
            temp.push_back(word);
        }
        int ans = 0;
        for (string ch : temp)
        {
            bool flag = true;
            for (char c : ch)
            {
                if (arr[c - 'a'] == -1)
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